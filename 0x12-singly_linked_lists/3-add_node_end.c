#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 *
 * @head: head of the linked list
 * @str: a string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *tmp;
	unsigned int len = 0, i = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->str = malloc(sizeof(char) * (strlen(str) + 1));
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	while (str[i])
	{
		node->str[i] = str[i];
		len++;
		i++;
	}
	node->len = len;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = node;
	}

	return (*head);
}
