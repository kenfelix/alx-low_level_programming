#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of new memory array.
 *
 *
 * Return: the string initialized.
 */
void *malloc_checked(unsigned int b)
{
	void *memloc;

	memloc = malloc(b);
	if (memloc = NULL)
	{
		exit(98);
	}
	return (memloc);
}

