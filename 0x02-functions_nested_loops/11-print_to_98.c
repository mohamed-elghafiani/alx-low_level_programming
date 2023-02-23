#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 *
 * @n : an integer; the starting number
 *
 * Return: void
 *
 */

void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
		printf("%d\n", i);
	}
	else
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
		printf("%d\n", i);
	}
}
