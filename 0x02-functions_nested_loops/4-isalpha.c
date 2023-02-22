#include <stdio.h>

/**
 * _isalpha - a function that checks if a character is alphabetic.
 *
 * @c : the character to check
 * Return: returns 1 if the character is an alphabet and 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
