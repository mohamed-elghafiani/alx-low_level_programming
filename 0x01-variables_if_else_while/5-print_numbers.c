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
	for (int i = 0; i <= 9; i++)
	{
	putchar(i+'0');
	}
	putchar('\n');
	return (0);
}
