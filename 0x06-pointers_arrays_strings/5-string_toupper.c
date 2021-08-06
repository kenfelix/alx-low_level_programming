#include "holberton.h"

/**
 * *string_toupper - converts strings from lowercase to uppercase
 * @s: string analized
 *
 * Return: string with all letters uppercased
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s +i) <= 'z')
		{
			*(s +i) = *(s + i) - 32;
		}
		i++
	}

	return (s);
}

