#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search -  searches for a value in an array of integers
 * using the Binary search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to find in array
 * Return: first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start, end, mid;

	if (!array || !value)
		return (-1);

	start = 0;
	end = size - 1;

	while (start <= end)
	{
		print_array(array, start, end);
		mid = (start + end) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			end = mid - 1;
		}
		else if (array[mid] < value)
		{
			start = mid + 1;
		}
	}
	return (-1);
}


/**
 * print_array - prints an array
 * @array: pointer to arrat
 * @start: start index
 * @end: end index
 * Return: void
 */
void print_array(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");
	while (start <= end)
	{
		if (start != end)
		{
			printf("%d, ", array[start]);
		}
		else
		{
			printf("%d", array[start]);
		}
		start++;
	}
	printf("\n");
}
