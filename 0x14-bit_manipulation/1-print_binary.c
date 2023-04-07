#include <stdio.h>
#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 *
 * @n: an integer
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar((n & 0x01) + '0');
		return;
	}
	print_bits(n);
}

/**
 * print_bit - a helper function that prints the binary rep. of a number
 *
 * @n: a number
 * Return: Nothing
 */

void print_bits(unsigned long int n)
{
	if (n)
	{
		print_bits(n >> 1);
		_putchar((n & 0x01) + '0');
	}
}
