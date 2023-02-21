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
	int a, b;

	for (a = 0; a < 100; a++)
	{
		for (b = a + 1; b < 100; b++)
		{
			int a_1 = a / 10;
			int a_2 = a % 10;
			int b_1 = b / 10;
			int b_2 = b % 10;

			putchar(a_1 + '0');
			putchar(a_2 + '0');
			putchar(' ');
			putchar(b_1 + '0');
			putchar(b_2 + '0');

			if (a != 98 || b != 99)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
