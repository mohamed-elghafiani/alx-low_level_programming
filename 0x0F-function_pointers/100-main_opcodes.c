#include <stdlib.h>
#include <stdio.h>

/**
 * main - a simple main program
 *
 * @argc: # of args
 * @argv: args vector
 * Return: returns 38
 */

int main(int argc, char *argv[])
{
	int i = 0;
	char *ptr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		return (2);
	}
	for (i = 0; i < atoi(argv[1]); i++)
	{
		printf("%02hhx ", ptr[i]);
	}
	printf("\n");

	return (38);
}
