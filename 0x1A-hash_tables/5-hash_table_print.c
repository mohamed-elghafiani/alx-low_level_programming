#include <stddef.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints the hash_table
 *
 * @ht: hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp_node;
	unsigned long int index = 0;
	unsigned int i = 0;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		tmp_node = ht->array[index];
		if (tmp_node)
		{
			if (i == 0)
			{
				printf("'%s': '%s'", tmp_node->key, tmp_node->value);
				i = 1;
			}
			printf(", '%s': '%s'", tmp_node->key, tmp_node->value);
		}
	}
	printf("}\n");
}
