#include "lists.h"

/**
 * dlistint_len - returns the number of element
 * @h: The doubly linked list
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	if (h == NULL)
	{
		printf("%s", "Empty list");
	}
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
