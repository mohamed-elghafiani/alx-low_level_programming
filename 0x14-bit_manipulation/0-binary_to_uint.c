#include <stddef.h>
#include <string.h>

/**
 * binary_to_uint -  a function that converts a binary number to an uint
 *
 * @b: a pointer to a string of 0 and 1 chars
 * Return: the converted number,
 *      or 0 if @b in NULL or conatains chars other than 0 and 1 or
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int integer = 0, len = 0, i, mul = 1;

	if (b == NULL)
	{
		return (0);
	}
	len = strlen(b);
	for (i = len; i; i--)
	{
		if (b[i - 1] != '0' && b[i - 1] != '1')
		{
			return (0);
		}
		if (b[i - 1] == '1')
		{
			integer += mul;
		}
		mul *= 2;
	}
	return (integer);
}
