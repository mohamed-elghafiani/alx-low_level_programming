#include "main.h"

/**
 * print_number - a function that prints an integer
 *
 * @n: the integer to print
 * Return: Nothing
 */

void print_number(int n)
{
	int n_10 = 1, tmp = n;

	if (n < 0)
	{
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
	_putchar(n % 10 + '0');
}
