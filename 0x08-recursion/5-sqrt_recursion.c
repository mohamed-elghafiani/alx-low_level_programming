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

	return (helper(n_mid, n));

}

/**
 * helper - a helper function
 *
 * @m: an integer
 * @n: an integer
 * Return: returns an int
 */

int helper(int m, int n)
{
	if (m == 0)
	{
		return (-1);
	}
	if (m * m == n)
	{
		return (m);
	}

	return (helper(m - 1, n));
}
