#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet, in lowercase,
 *	followed by a new line.
 *
 * Return: return on success 0!
 *
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);

		c++;
	}

	_putchar('\n');
}
