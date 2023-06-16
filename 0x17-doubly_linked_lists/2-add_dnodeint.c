#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint -  a function that adds a new node at the beginning
 *	of a dlistint_t list
 *
 * @head: a pointer to the head of the dlistint_t
 * @n: the value of the added node's integer
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (*head);
	}
	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
