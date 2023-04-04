#include <stddef.h>
#include "lists.h"

/**
 * listint_len - a function that returns the # of elements in a linked list
 *
 * @h: a poinetr to the linked list
 * Return: the number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
