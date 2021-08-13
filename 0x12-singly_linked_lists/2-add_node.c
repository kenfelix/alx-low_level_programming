#include "lists.h"

/**
 * _strlen - gets the length of a string
 * @s: the string
 * Return: length of string
 */

int _strlen(const char *s)
{
	int len = 0;

	while (*(s + len))
	{
		len++;
	}
	return (len);
}

/**
 * *add_node - adds node at the begining of a list
 * @head: current head address
 * @str: string to be copied into list
 * Return: number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t new_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node->str);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

