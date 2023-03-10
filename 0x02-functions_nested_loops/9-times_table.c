#include "main.h"

/**
 * times_table - a function that prints the times table
 *
 * Return: void
 *
 */

void times_table(void)
{
	int i, j, ixj;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			ixj = i * j;
			if (ixj / 10 != 0)
			{
				_putchar((ixj / 10) + '0');
				_putchar((ixj % 10) + '0');
			}
			else if (j > 0)
			{
				_putchar(' ');
				_putchar((ixj % 10) + '0');
			}
			else
			{
				_putchar((ixj % 10) + '0');
			}

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
