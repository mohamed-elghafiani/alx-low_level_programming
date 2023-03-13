#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed to it
 *
 * @argc: the argument count
 * @argv: the arguments vector
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
