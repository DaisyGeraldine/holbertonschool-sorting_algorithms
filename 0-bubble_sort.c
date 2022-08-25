#include <stdio.h>
#include "sort.h"
/**
 * bubble_sort - task 00
 * @array : list of elements
 * @size : size of array
 * Description: function that sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * Return: nothing.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, k = 0;
	int temp = 0;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 1; j < size; j++)
		{
			if (array[k] > array[j])
			{
				temp = array[k];
				array[k] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
			k++;
		}
		k = 0;
	}
}
