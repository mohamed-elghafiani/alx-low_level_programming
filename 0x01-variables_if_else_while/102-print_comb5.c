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
	int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = a; c < 10; c++)
			{
				for (d = b; d < 10; d++)
				{
					if (a + b == c + d)
					{
						continue;
					}
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');

					if (a + b != 17)
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}

	}

	putchar('\n');
	return (0);
}
