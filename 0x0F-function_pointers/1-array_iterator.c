#include <stddef.h>

/**
 * array_iterator - a function that executes a function given as a parameter
 *	on each element of an array.
 *
 * @array: is a pointer to an array
 * @size: is the size of the array
 * @action:  is a pointer to the function you need to use
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
