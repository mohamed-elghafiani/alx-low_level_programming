#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural square root
 *	of a number
 *
 * @n: an integer whose sqrt would be detremined
 * Return: returns the sqrt(n), If n does not have a natural square root,
 *	the function should return -1
 */

int _sqrt_recursion(int n)
{
	int n_mid = n / 2;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (helper(0, n_mid, n));

}

/**
 * helper - a helper function
 *
 * @start: an integer
 * @m: an integer
 * @n: an integer
 * Return: returns an int
 */

int helper(int start, int m, int n)
{
	if (start == m)
	{
		return (-1);
	}
	if (start * start == n)
	{
		return (start);
	}

	return (helper(start + 1, m, n));
}
