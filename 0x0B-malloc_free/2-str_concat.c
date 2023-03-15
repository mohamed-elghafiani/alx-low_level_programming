#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - a function that concatenate two strings
 *
 * @s1: string 1
 * @s2: string 2
 * Return: returns a string concatenating the two strings
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, i;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	str = malloc(sizeof(char) * (len1 + len2 + 1));

	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		str[i + len1] = s2[i];
	}
	return (str);
}
