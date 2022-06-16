#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search -  searches for a value in an array of integers
 * using the Jump search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to find in array
 * Return: first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, end, i;

	if (!array || !value)
		return (-1);
	start = 0;
	end = sqrt(size);

	while (array[end] <= value && end < size)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		start = end;
		end += sqrt(size);
		if (end > size - 1)
			end = size;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	for (i = start; i < end; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
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
