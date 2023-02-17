#include <stdio.h>

/**
 * main - prints alphabets using putchar
 *
 * Description: This program will prints the alphabets using
 *              the `putchar` function
 * Return: returns 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}

	for (c = 'A'; c <= 'Z'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
