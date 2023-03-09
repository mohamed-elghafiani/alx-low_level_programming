#include "main.h"
#include <string.h>

/**
 * is_palindrome - a function that determines if a string is palindrome or not
 *
 * @s: a pointer to a string
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	unsigned int len = 0;

	len = strlen(s);

	if (len <= 1)
	{
		return (1);
	}
	
	return (check_palindrome(s, 0, len / 2 - 1, len - 1));
}

int check_palindrome(char *s, int start, int h_len, int len)
{
	if (s[start] != s[len])
	{
		return (0);
	}

	if (start == h_len)
	{
		return (1);
	}

	return (check_palindrome(s, ++start, h_len, --len));
}
