#include "main.h"

/**
 * jack_bauer - a function that prints every minute of the day of
 *	Jack Bauer, starting from 00:00 to 23:59.
 *
 * Return: void
 */


void jack_bauer(void)
{
	int i = 0, j = 0;
	int i_first, i_second, j_first, j_second;

	while (i <= 60)
	{
		if (i == 60)
		{
			j++;
			i = 0;
		}


		i_first = i / 10;
		i_second = i % 10;
		j_first = j / 10;
		j_second = j % 10;

		_putchar(j_first + '0');
		_putchar(j_second + '0');
		_putchar(':');
		_putchar(i_first + '0');
		_putchar(i_second + '0');
		_putchar('\n');
		if (j == 23 && i == 59)
		{
			break;
		}
		i++;
	}
}
