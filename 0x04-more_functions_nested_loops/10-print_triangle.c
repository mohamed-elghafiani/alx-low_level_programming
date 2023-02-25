#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	m = size - 1;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < m)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		m--;
		_putchar('\n');
	}
}
