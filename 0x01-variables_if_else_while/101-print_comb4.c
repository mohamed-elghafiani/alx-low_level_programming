#include <stdio.h>

/**
 * main - print numbers combinations
 *
 * Description: This program prints the combinations of numbers 0-9
 *		Numbers are composed of three different numbers.
 *              exceptions are: 1- The numbers should be different
 *                              2- 012,120,102,021,201 and 210 are all the same
 *
 * Return: return 0
 */

int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (a != 7)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}

	}

	putchar('\n');
	return (0);
}
