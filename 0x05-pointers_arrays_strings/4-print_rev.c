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
	int i = 0, j;

	while (*(s + i) != '\0')
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');
}
