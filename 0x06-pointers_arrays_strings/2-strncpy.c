#include "holberton.h"

/**
 * *_strncpy - concatenate strings, defining the sizeof the second string
 *
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of destination string
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}

	return (dest);
}

