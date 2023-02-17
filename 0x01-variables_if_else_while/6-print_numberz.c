#include <stdio.h>

/**
 * main - prints numbers using putchar
 *
 * Description: This program will prints numbers 0-9 using
 *              the `putchar` function
 * Return: returns 0
 */

int main(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
	putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
