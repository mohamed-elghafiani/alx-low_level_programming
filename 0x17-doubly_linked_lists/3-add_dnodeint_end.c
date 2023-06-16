#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end
 *	of a dlistint_t list
 *
 * @head: a pointer to the head of the linked list
 * @n: an integer value used to fill the newly added node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	/* if no node is there just return the new_node */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		/* Go to the end of the dlist and insert the new_node */
		while ((*head)->next)
		{
			*head = (*head)->next;
		}
		(*head)->next = new_node;
		new_node->prev = *head;
		/* Go back to the head of the dlist */
		while ((*head)->prev)
		{
			*head = (*head)->prev;
		}
	}
	return (*head);
}
