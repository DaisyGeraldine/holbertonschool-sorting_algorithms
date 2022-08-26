#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - function that sort an array of integers
 *
 * @array: List of integers
 * @size: Lenght
 * Return: None
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, var;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		var = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[var])
			{
				var = j;
			}
		}
		if (var != i)
		{
			temp = array[i];
			array[i] = array[var];
			array[var] = temp;
			print_array(array, size);
		}
	}
}
