#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid -  a function that returns a pointer to a 2D array of integers.
 *
 * @width: number of columns
 * @height: number of rows
 * Return: returns a pointer to the 2D array
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j, m;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int *) * (height + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * (width + 1));
		if (arr[i] == NULL)
		{
			for (m = 0; m <= i; m++)
			{
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
