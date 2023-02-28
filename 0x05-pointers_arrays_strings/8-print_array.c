#include <stdio.h>

/**
 * print_array - print elements of an integers array
 *
 * @a: an array of intgers
 * @n: the length of the array
 * Return: Nothing.
 */

void print_array(int *a, int n)
{
	int i;
	
	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d\n", a[i]);
	}
}
