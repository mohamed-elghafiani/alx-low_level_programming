#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - determine if a rand av. is +, -, or 0
 *
 * Description: Given a random variable this program will determine
 * if this variable is +, -, or 0
 * Return: returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
