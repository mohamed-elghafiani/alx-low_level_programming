#include <stdio.h>


/**
 * _abs - a function that compute the absolute value of an int
 *
 * @n : The integer whose absolute value will be computed
 *
 * Return: returns the absolute value of the integer @n
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (- n);
	}
}
