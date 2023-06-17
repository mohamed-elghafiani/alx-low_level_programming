#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - added a function that inserts a new
 *	node at a given position
 *
 * @h: a double pointer to the head of the list
 * @idx: the index of the position at which to insert the new node
 * @n: the integer value of the node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp = *h;
	unsigned int i = 0;

	/* If no node exist return NULL */
	if (*h == NULL)
	{
		return (NULL);
	}
	/* Create the new_node  */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	while ((*h)->next)
	{
		if (i == idx)
		{
			new_node->next = tmp;
			if (idx != 0)
			{
				new_node->prev = tmp->prev;
				(tmp->prev)->next = new_node;
			}
			else
			{
				new_node->prev = NULL;
			}
			return (new_node);
		}
		i++;
		tmp = tmp->next;
	}
	return (NULL);
}
