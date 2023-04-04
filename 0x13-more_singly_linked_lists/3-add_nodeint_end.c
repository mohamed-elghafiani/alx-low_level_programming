#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - a function that adds a node at the end of the linked list
 *
 * @head: the head of the linked list
 * @n: the integer value
 * Return: a poinetr to the new linked list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

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
	tmp = *head;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	tmp->next = new;
	return (*head);
}
