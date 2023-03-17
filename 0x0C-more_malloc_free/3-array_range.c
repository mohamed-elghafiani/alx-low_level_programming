#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 *
 * @min: minimum value
 * @max: maximum value
 * Return: returns a pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int j;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	arr[0] = min;
	for (j = 1; j < (max - min + 1); j++)
	{
		arr[j] = arr[j - 1] + 1;
	}
	return (arr);
}
