#include <stdio.h>
#include "lists.h"


/**
 * print_listint - a function that prints all the elements of a listint_t list
 *
 * @h: a pointer to the first element of the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int len = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
