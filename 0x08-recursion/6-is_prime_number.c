#include "main.h"

/**
 * is_prime_number -  a function that determines if an integer is prime or not
 *
 * @n: an integer
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (trial(n / 2, n));
}

/**
 * trial - a helper function that will perform the trail algorithm
 *
 * @n: the integer we want to determine if it's prime nr not
 * @a: the integer n/2
 * Return: returns 0 if there is a divider of @n between 1-@a,
 *	otherwise returns 1
 */

int trial(int a, int n)
{
	if (a <= 1)
	{
		return (1);
	}

	if (n % a == 0)
	{
		return (0);
	}
	return (trial(a - 1, n));
}
