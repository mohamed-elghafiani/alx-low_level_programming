#include <stdlib.h>
#include "lists.h"


/**
 * free_listint2 - a function that frees a listint_t list
 *	and set the head to NULL
 *
 * @head: a pointer to the head of the linked list
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	while ((*head)->next)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	free(tmp);
	free(*head);
	head = NULL;
}
