#include <stdio.h>

/**
 * main - prints alphabets using putchar
 *
 * Description: This program will prints the alphabets using
 *              the `putchar` function except 'q' and 'e'
 * Return: returns 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
