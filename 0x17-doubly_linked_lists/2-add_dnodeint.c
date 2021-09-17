#include "lists.h"

/**
 * *add_dnodeint - a function that adds a node at the begining of the
 * doubly linked list
 * @head:  pointer to head node
 * @n: data contained by node
 *
 * Return: the value of the new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	if (*head)
	{
		(*head)->prev = newNode;
	}
	(*head) = newNode;

	return (newNode);
}
