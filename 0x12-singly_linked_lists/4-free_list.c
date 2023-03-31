#include <stddef.h>
#include<stdlib.h>
#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 *
 * @head: head of the linked list
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *tmp, *c;

	if (head == NULL)
	{
		return;
	}
	tmp = head;
	while (tmp->next != NULL)
	{
		c = tmp;
		if (c->str != NULL)
		{
			free(c->str);
		}
		free(c);
		tmp = tmp->next;
	}
	if (tmp->str != NULL)
	{
		free(tmp->str);
	}
	free(tmp);
}
