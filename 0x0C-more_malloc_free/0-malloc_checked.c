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
	if (malloc(b) == NULL)
	{
		exit(98);
	}
	else
	{
		return (malloc(b));
	}
}
