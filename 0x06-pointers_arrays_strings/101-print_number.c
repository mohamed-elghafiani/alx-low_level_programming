#include "main.h"

/**
 * print_number - a function that prints an integer
 *
 * @n: the integer to print
 * Return: Nothing
 */

void print_number(int n)
{
	int n_10 = 1, tmp = n, is_INT_MIN = 0;

	if (n < 0)
	{
		if (n == -2147483648)
		{
			n++;
			is_INT_MIN = 1;
		}
		n = -n;
		_putchar('-');
	}

	while (tmp / 10 != 0)
	{
		n_10 *= 10;
		tmp /= 10;
	}

	while (n_10 > 1)
	{
		_putchar(n / n_10 + '0');
		n = n % n_10;
		n_10 /= 10;
	}
	if (is_INT_MIN)
	{
		n++;
	}
	_putchar(n % 10 + '0');
}
