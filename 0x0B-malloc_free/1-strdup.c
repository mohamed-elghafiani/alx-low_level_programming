#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a new string
 *	which is a duplicate of the string str
 *
 * @str: a pointer to a string
 * Return: a pointer to the new copied string or NULL
 */

char *_strdup(char *str)
{
	unsigned int i, len;
	char *cp;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	cp = (char *)malloc(sizeof(char) * (len + 1));

	if (cp == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		cp[i] = str[i];
	}
	return (cp);
}
