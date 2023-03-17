#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concat
 * Return: a pointer to the new concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, s1len;
	char *str_cat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s1len = strlen(s1);
	if (n > strlen(s2))
	{
		n = strlen(s2);
	}
	str_cat = malloc(sizeof(char) * (s1len + n + 1));
	if (str_cat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1len; i++)
	{
		str_cat[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		str_cat[s1len + i] = s2[i];
	}
	str_cat[s1len + n] = '\0';
	return (str_cat);
}
