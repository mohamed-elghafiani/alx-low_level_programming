#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need to
 *	flip to get from one number to another
 *
 * @n: first number
 * @m: second number
 * Return: the number of bits you would need to flip to go from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int n_one = 0, i = 0;

	while (i != (sizeof(n) * 8))
	{
		if (((n & (1 << i)) >> i) != ((m & (1 << i)) >> i))
		{
			n_one++;
		}
		i++;
	}
	return (n_one);
}
