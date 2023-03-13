#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers
 *
 * @argc: the argument count
 * @argv: the arguments vector
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (0);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
