#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 *
 * @n: an integer
 * @index: index of the bit to extract
 * Return: returns the bit extracted
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 0x01);
}
