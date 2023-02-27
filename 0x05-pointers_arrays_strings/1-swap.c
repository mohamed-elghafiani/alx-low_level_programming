#include <stdio.h>

/**
 * swap_int - funtion that swaps two integers
 *
 * @a: first integer
 * @b: second integer
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
