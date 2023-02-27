#include "main.h"

/**
 * print_rev - a function that prints a string in reverse order
 *	followed by a new line
 *
 * @s: string to print in reverse
 * Return: Nothing.
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
