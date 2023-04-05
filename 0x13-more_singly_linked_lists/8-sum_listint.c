#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - a function that sums the data in a linked list
 *
 * @head: a pointer to the head of the linked list
 * Return: the sum of all the data (n) of the listint_t linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
