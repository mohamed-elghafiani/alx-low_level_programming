#include <stddef.h>
#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 *
 * @head: a double pointer to the head of the listint_t linked list
 * Return: a pointer to the header of the reversed listint_t linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp1, *tmp2;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	if ((*head)->next == NULL)
	{
		return (*head);
	}
	tmp1 = (*head)->next;
	(*head)->next = NULL;
	while (tmp1)
	{
		tmp2 = tmp1;
		tmp1 = tmp1->next;
		tmp2->next = *head;
		*head = tmp2;
	}
	return (*head);
}
