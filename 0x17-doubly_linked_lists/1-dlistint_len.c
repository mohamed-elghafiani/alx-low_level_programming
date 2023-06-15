#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements in a
 *	linked dlistint_t list
 *
 * @h: a pointer to the head of the linked list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
