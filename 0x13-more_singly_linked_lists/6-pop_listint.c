#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of
 *	the listint_t linked list
 *
 * @head: pointer to a pointer to the head of the linked list
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	tmp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
