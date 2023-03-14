#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins to
 *	make change for an amount of money.
 *
 * @argc: args count
 * @argv: args vector
 * Return: returns 0 (Success) or 0 (Failure)
 */

int main(int argc, char *argv[])
{
	int change[6] = {25, 10, 5, 2, 1};
	int i, num, lst_rmndr, nchange = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (1);
	}

	num = atoi(argv[1]);
	lst_rmndr = num / change[0];

	if (lst_rmndr != 0)
	{
		nchange += lst_rmndr;
		lst_rmndr = num % change[0];
	}
	else
	{
		lst_rmndr = num;
	}
	for (i = 1; i < 5; i++)
	{

		if (lst_rmndr / change[i] != 0)
		{
			nchange += lst_rmndr / change[i];
			lst_rmndr = num % change[i];
		}
	}
	printf("%d\n", nchange);
	return (0);
}
