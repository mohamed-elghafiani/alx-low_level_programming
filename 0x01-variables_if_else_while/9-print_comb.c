#include <stdio.h>

/**
 * main - print numbers separated by commas
 *
 * Description: prints all possible combinations of single-digit numbers
 *              separated by commas.
 * Return: returns 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i != 9)
		{
		putchar(',');
		putchar(' ');
		}
		i++;
	}
	putchar('\n');

	return (0);
}
