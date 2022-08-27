#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * quick_sort - task 03
 * @array : list of elements
 * @size : size of array
 * Description: function that sorts an array of integers in
 * ascending order using the Quick sort algorithm.
 * Return: nothing.
 */
void quick_sort(int *array, size_t size)
{
	int high = size - 1;

	if (!array || size < 2)
		return;

	sort(array, 0, high, size);

}
/**
 * sort - task 03
 * @array : list of elements.
 * @low : lower.
 * @high :higher.
 * @size : size of the array.
 * Description: function recursive
 * Return: nothing.
 */
void sort(int *array, int low, int high, size_t size)
{
	int part_index = 0;

	if (low < high)
	{
		part_index = partition_array(array, low, high, size);
		/*Separately sort element before*/
		/*partition and after partition*/
		sort(array, low, part_index - 1, size);
		sort(array, part_index + 1, high, size);
	}

}
/**
 * partition_array - task 03
 * @array : list of elements.
 * @low : lower.
 * @high :higher.
 * @size : size of the array.
 * Description: function partition than depends pivot.
 * Return: return the element that is in the correct position.
 */
int partition_array(int *array, int low, int high, size_t size)
{
	int pivot = 0, i = 0, j = low;

	pivot = array[high];
	i = (low - 1);

	for (; j <= high - 1; j++)
	{
		/*if current element is smaller than the pivot*/
		if (array[j] < pivot)
		{
			/*increment index of smallet element*/
			i++;
			if (array[i] != array[j])
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[high])
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}
/**
 * swap - task 03
 * @first : first value.
 * @second : second value.
 * Description: function swap the values ​​of two arrays.
 * Return: nothing.
 */
void swap(int *first, int *second)
{
	int temp = 0;

	temp = *first;

	*first = *second;
	*second = temp;
}
