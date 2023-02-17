#include <stdio.h>

/**
 * main - prints base16 numbers
 *
 * Description: This program will print base16 numbers
 *              the `putchar` function
 * Return: returns 0
 */

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	putchar(c);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
