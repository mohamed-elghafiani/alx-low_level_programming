#include <stddef.h>

/**
 * _strchr - a function that locates a character in a string.
 *
 * @s: a string
 * @c: the character to locate
 * Return: Returns a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not
 */


char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	if (c == '\0')
	{
		return (s + i);
	}
	else
	{
		return (NULL);
	}
}
