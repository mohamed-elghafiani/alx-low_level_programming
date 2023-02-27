#include "main.h"

/**
 * puts2 - a function that prints every other character followed by a new line
 *
 * @str: atring to print out
 * Return: Nothing.
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
	_putchar('\n');
}
