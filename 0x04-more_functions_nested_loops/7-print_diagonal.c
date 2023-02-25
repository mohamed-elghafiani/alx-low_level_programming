#include "main.h"

/**
 * print_diagonal - a function that prints a line
 *
 * @n: the number of `\` to print
 * Description: the function will prints `\` n times followed by \n
 *	if n = 0, the funtion will print \n
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');

		}
	}

}
