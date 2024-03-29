#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table of size @size
 *
 * @size: The size of the hash table
 * Return: a pointer to the created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable;
	hash_node_t **hnodes;
	unsigned int i = 0;

	htable = malloc(sizeof(hash_table_t));
	if (!htable)
	{
		return (NULL);
	}
	htable->size = size;
	hnodes = malloc(sizeof(hash_node_t *) * size);
	if (!hnodes)
	{
		free(htable);
		return (NULL);
	}
	while (i < size)
	{
		hnodes[i] = NULL;
		i++;
	}
	htable->array = hnodes;

	return (htable);
}
