#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: a pointer to the hash table
 * @key: the key
 * @value: the value
 * Return: 1 if it succeeds and 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;

	if (*key == '\0')
	{
		return (0);
	}
	new_node = malloc(sizeof(hash_node_t *));
	if (!new_node)
	{
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	index = key_index((unsigned char *)key, ht->size);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
