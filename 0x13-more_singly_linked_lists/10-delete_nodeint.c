#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - a function that delete a node at an index
 *
 * @head: a pointer to a pointer to the head of the listint_t linked list
 * @index: is the index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp, *tracer;

	if (head == NULL)
	{
		return (-1);
	}

	if (index == 0 && *head != NULL)
	{
		tmp = (*head);
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	tracer = *head;
	while (tracer)
	{
		if (i == index - 1)
		{
			tmp = tracer->next;
			tracer->next = tmp->next;
			free(tmp);
			return (1);
		}
		tracer = tracer->next;
		i++;
	}
	return (-1);

}
