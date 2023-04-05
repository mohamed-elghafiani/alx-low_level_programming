#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a node at a position
 *
 * @head: a pointer to a pointer to the head of the listint_t linked list
 * @idx: is the index of the list where the new node should be added
 * @n: the integer value of the node
 * Return: the adress of the new node or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node, *tmp;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	tmp = *head;
	while (tmp)
	{
		if (i == idx - 1)
		{
			node->next = tmp->next;
			tmp->next = node;
			return (node);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);

}
