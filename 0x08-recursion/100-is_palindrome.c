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

/**
 * check_palindrome - a helper function
 *
 * @s: a pointer to a string
 * @start: starting point
 * @h_len: half length of string
 * @len: the length of the string
 * Return: 0 if the string isn't palindrome and 1 if it is
 */

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
