#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 *
 * @b: size of memory to allocate
 * Return: Void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
