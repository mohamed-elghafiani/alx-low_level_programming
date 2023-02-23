#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - a function that determines the last digit of a number
 *
 * @n : The number to look for its last digit
 * Return: returns the last digit of the number passed
 *
 */


int print_last_digit(int n)
{
	int n_last_digit;

	n_last_digit = n % 10;
	if (n_last_digit < 0)
	{
		n_last_digit = -n_last_digit;
	}
	_putchar(n_last_digit + '0');

	return (n_last_digit);

}
