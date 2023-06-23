#include <stdio.h>

/**
 * _islower - a function that checks if a character is lowercase.
 *
 * @c : the character to check
 * Return: returns 1 if the character is lowercase and 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
