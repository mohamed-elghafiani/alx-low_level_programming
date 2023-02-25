#include "main.h"

/**
 * print_line - a function that prints a line
 *
 * @n: the number of `_` to print
 * Description: the function will prints `_` n times followed by \n
 *	if n = 0, the funtion will print \n
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
