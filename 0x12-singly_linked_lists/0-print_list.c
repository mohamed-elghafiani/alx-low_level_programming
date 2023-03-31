#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 *
 * @h: a linked list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int n = 0;
	const list_t *tmp;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		n++;
	}
	return (n);
}

