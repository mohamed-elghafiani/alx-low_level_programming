#include <stddef.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node
 *	of a dlistint_t linked list
 *
 * @head:  a pointer to the head of the dlistint_t
 * @index: the position of the node to return
 * Return: a pointer to the desired node, else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head->next)
	{
		if (n == index)
		{
			return (head);
		}
		head = head->next;
		n++;
	}
	return (NULL);
}
