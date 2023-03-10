#include "main.h"
#include <stdio.h>

/**
 * wildcmp - a function that compares two strings
 *
 * @s1: a pointer to string 1
 * @s2: a pointer to string 2
 * Return: returns 1 if the strings can be considered identical,
 *	otherwise return 0
 */

int wildcmp(char *s1, char *s2)
{
	int i;

	i = if_null(s1, s2);

	if (i != 2)
	{
		return (i);
	}

	if (*s1 == *s2)
	{
		return (wildcmp(++s1, ++s2));
	}
	if (*s1 != *s2 && *s2 == '*')
	{
		s2 = skip_asterisk(s2);
		if (*s2 == '*')
		{
			return (1);
		}
		if (*s1 != *s2)
		{
			s1 = get_to(s1, *s2);
		}
		if (*get_to(s1 + 1, *s2) != '\0')
		{
			s1 = get_to(s1 + 1, *s2);
		}
		return (wildcmp(s1, s2));
	}
	return (0);
}

/**
 * get_to - a function that finds the letter c in string s
 *
 * @s: a pointer to a string
 * @c: a character
 * Return: returns a pointer to the position of c in s
 */

char *get_to(char *s, char c)
{
	if (*s == '\0')
	{
		return ("");
	}
	if (*s != c)
	{
		return (get_to(++s, c));
	}
	return (s);
}

/**
 * skip_asterisk - a function that skips the asterisks in a string s
 *
 * @s: a pointer to the string
 * Return: returns a pointer to the next character after asterisks
 */

char *skip_asterisk(char *s)
{
	if (*s == '\0')
	{
		--s;
		return (s);
	}
	if (*s == '*')
	{
		++s;
		return (skip_asterisk(s));
	}
	return (s);
}

/**
 * if_null - a helper function that checks the null pointers case
 *
 * @s1: a pointer to a string
 * @s2: a pointer to a string
 * Return: returns an integer depending on three cases
 */

int if_null(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == '\0')
	{
		s2 = skip_asterisk(s2);
		if (*s2 == '*')
		{
			return (1);
		}
		return (0);
	}
	if (*s2 == '\0')
	{
		if (*s1 == '*')
		{
			return (1);
		}
		return (0);
	}
	return (2);
}
