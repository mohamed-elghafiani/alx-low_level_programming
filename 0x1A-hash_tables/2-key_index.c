#include "hash_tables.h"


/**
 * key_index - calculates the index associated with a key
 *
 * @key: key
 * @size: the size of the array of the hash table
 * Return: the index associated with the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, key_hash;

	key_hash = hash_djb2(key);
	index = key_hash % size;

	return (index);
}
