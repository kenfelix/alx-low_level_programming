#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: char for initialized the array.
 *
 * Return: the string initialized.
 */
char *create_array(unsigned int size, char c)
{
	char *memArray;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	memArray = int* malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		*(memArray + i) = c;
	}
	return (memArray);
}

