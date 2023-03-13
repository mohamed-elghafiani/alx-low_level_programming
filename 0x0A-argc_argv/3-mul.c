#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 *
 * @argc: the argument count
 * @argv: the arguments vector
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	if (argc < 3)
	{
		printf("Error\n");
		return (0);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
