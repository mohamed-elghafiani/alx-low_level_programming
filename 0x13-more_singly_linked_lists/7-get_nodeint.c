#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 *	of a listint_t linked list
 *
 * @head: a pointer to the head of the linked list
 * @index: the index of the wanted node
 * Return: the nth node of the linked list or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
		{
			return (head);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}

