#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search -  searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to find in array
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!value || !array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
