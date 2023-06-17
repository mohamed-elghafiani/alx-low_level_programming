#include "lists.h"

/**
 * sum_dlistint - added a function that returns the sum
 *	of all the data (n) of a dlistint_t linked list
 *
 * @head: a pointer to the head of the list
 * Return: the sum of the values (n), or 0 in case the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int n = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head->next)
	{
		n += head->n;
		head = head->next;
	}
	n += head->n;

	return (n);
}
