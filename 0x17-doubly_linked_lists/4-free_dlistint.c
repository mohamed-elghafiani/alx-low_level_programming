#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list
 *
 * @head: a pointer to the head of the dlistint_t list
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	/* Go to the end of the list */
	while (head->next)
	{
		head = head->next;
	}
	/* Start freeing each node by going backwards */
	while (head->prev)
	{
		head = head->prev;
		free(head->next);
	}
	free(head);
}
