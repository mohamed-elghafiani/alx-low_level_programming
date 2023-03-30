#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 *
 * @head: head of the linked list
 * @str: a string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int len = 0, i = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->next = *head;
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
	*head = node;

	return (node);
}
