#include <stdlib.h>
#include "hash_tables.h"


/**
 * llist_delete - deletes linked list
 *
 * @llist: linked list
 * Return: Nothing
 */
void llist_delete(hash_node_t **llist)
{
	hash_node_t *tmp_node_next, *tmp_node;

	if (*llist == NULL)
	{
		return;
	}
	tmp_node = *llist;
	while (tmp_node->next)
	{
		tmp_node_next = tmp_node->next;
		free(tmp_node->value);
		free(tmp_node->key);
		free(tmp_node);
		tmp_node = tmp_node_next;
	}
	free(tmp_node->value);
	free(tmp_node->key);
	free(tmp_node);
}


/**
 * hash_table_delete - deletes the hash table
 *
 * @ht: hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;

	for (index = 0; index < ht->size; index++)
	{
		llist_delete(&ht->array[index]);
	}
	free(ht->array);
	free(ht);
}
