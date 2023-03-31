#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - test function 
 *
 * @argc: number of args passed
 * @argv: args vector
 * Return: 0 (Always)
 */

int main(int argc, char* argv[])
{
	int a, b;
	char *s;

	if (argc <= 4)
	{
		printf("Error\n");
		return (0);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];
	if (get_op_func(s) == NULL)
	{
		printf("Error\n");
		return (0);
	}
	printf("%d\n", get_op_func(s)(a, b));
	return (0);
}
