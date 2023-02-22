#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints "_putchar", followed by a new line.
 *
 * Return: return on success 0!
 *
 */

int main(void)
{
	char str[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i = 0;

	while (i < 8)
	{
		_putchar(str[i]);

		i++;
	}

	_putchar('\n');
	return (0);
}
