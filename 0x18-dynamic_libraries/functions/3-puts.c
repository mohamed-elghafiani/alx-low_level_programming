#include "main.h"

/**
 * _puts - a function that a string to stdout followed by a new line
 *
 * @str: atring to print out
 * Return: Nothing.
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
