#include <stddef.h>
#include <stdlib.h>


/**
 * calloc - a function that allocates memory for an array, using malloc
 *
 * @nmemb: number of array elements
 * @size: size of each array element
 * Return: returns a pointer to the allocated array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * (nmemb + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= nmemb; i++)
	{
		arr[i] = 0;
	}
	arr[nmemb + 1] = '\0';
	return (arr);
}
