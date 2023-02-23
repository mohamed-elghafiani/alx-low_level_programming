#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 *
 * @n : the integer to look for its last digit
 * Return: returns 1 (success!)
 */

int print_last_digit(int n)
{
	int n_last_digit;

	if (n < 0)
	{
		n = -n;
	}
	n_last_digit = n % 10;
	_putchar(n_last_digit + '0');

	return (1);
}
