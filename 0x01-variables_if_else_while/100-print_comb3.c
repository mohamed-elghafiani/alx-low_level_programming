#include <stdio.h>

/**
 * main - print numbers combinations
 *
 * Description: This program prints the combinations of numbers 0-9
 *              exceptions are: 1- The numbers should be different
 *                              2- 01 and 10 are the same combinations
 *
 * Return: return 0
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a != 8)
			{
			putchar(',');
			putchar(' ');
			}
		}

	}

	putchar('\n');
	return (0);
}
