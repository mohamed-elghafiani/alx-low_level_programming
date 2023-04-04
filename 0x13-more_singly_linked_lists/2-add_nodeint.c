#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - a function that adds a node at the beginning of a linked list
 *
 * @head: a pointer to the head of the linked list
 * @n: the number of nodes in the linked list
 * Return: the new linked list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL || *head == NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
		{
			return (NULL);
		}
		new->n = n;
		new->next = NULL;
		*head = new;
		return (*head);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
