#include "main.h"

/**
 * puts_half - a function that prints the second half of a string
 *
 * @str: the string whose half will be printed
 * Return: Nothing.
 */

void puts_half(char *str)
{
	int len_str = 0, i;

	while (*(str + len_str) != '\0')
	{
		len_str++;
	}

	if (len_str % 2 == 0)
	{
		for (i = len_str / 2; i < len_str; i++)
		{
			_putchar(*(str + i));
		}
	}
	else
	{
		for (i = (len_str - 1) / 2; i < len_str; i++)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
