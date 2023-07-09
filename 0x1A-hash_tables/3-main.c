#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	hash_node_t *node;
	unsigned int i = 0;
	int r;

	ht = hash_table_create(1024);
	r = hash_table_set(ht, "betty", "cool");
	r = hash_table_set(ht, "hetairas", "One");
	r = hash_table_set(ht, "mentioner", "Two");
	if (r == 0)
	{
		printf("Something goes wrong!\n");
	}

	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			printf("i: %u, key: %s, value: %s\n", i, node->key, node->value);
			node = node->next;
		}
		i++;
	}
	return (EXIT_SUCCESS);
}
