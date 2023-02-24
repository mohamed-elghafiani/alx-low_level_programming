#include <stdio.h>

/**
 * _isdigit - function that checks if a character is a digit between 0 and 9
 *
 * @c: the character to check
 * Return: returns 1 if the character is a digit and 0 otherwise
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
