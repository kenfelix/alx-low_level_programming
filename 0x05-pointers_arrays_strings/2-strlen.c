#include "holberton.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: tested string
 * Return: length of the string as integer
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

