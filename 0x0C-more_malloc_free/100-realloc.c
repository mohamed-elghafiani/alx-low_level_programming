#include <stddef.h>
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 *
 * @ptr: a pointer to an old block of memory allocated using malloc
 * @old_size: size of old memory block
 * @new_size: new_size of the memory block
 * Return: returns a pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *p1, *p2;
	unsigned int j;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	p1 = ptr;
	p2 = new_ptr;
	for (j = 0; j < old_size; j++)
	{
		p2[j] = p1[j];
	}
	free(ptr);
	return (new_ptr);
}
