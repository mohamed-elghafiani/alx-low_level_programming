#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 *	and initializes it with a specific char.
 *
 * @size: the size of the array
 * @c: initiatization char
 * Return: returns a pointer to the resultant array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	arr = (char *)malloc(size);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
