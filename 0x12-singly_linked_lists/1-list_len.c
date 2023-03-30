#include <stddef.h>
#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 *	in a linked list_t list.
 *
 * @h: a pointer to a linked list
 * Return: the number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	unsigned int n = 0;
	const list_t *tmp;

	tmp = h;
	while (tmp)
	{
		n++;
		tmp = tmp->next;
	}
	return (n);
}

