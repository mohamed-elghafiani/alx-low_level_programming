#include <stdio.h>

/**
 * main - prints alphabets reversed using putchar
 *
 * Description: This program will prints the alphabets reversed z-a using
 *              the `putchar` function
 * Return: returns 0
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
