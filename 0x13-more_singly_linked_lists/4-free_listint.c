#include <stdlib.h>
#include "lists.h"


/**
 * free_listint - a function that frees a listint_t list
 *
 * @head: a pointer to the head of the linked list
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}
	while (head->next)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}
