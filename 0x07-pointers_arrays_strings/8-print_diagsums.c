#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of diagonals of a matrix
 *
 * @a: 2D array of integers
 * @size: the size of the array
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int diag1 = 0, diag2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		diag1 += a[i * size + i];
		diag2 += a[i * size + size - i - 1];
	}
	printf("%d, %d\n", diag1, diag2);
}
