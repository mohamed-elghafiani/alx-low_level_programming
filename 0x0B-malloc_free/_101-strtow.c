#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - a function that splits a string into words
 *
 * @str: a string
 * Return: returns a pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	int nbs = 0, len, i, j, k;
	char **wrds;		

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			nbs++;
		}
	}
	nbs++;
	wrds = malloc(sizeof(char *) * (nbs + 1));
	i = 0;
	for (k = 0; k < nbs; k++)
	{
		for (j = 0; j < len; j++)
		{
			if (str[j] == ' ' || str[j] == '\t')
			{
				wrds[k] = malloc(sizeof(char) * (j - i + 1));
				wrds[k] = strncpy(wrds[k], &str[i], j - i - 2);
				wrds[j - i] = '\0';
				i = j;
			}
		}
	}
	return (wrds);
}
