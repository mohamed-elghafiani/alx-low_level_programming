#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int count_words(char *str);
char **strtow(char *str);

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words in.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i])
	{
		/* Skip any leading spaces */
		while (str[i] && str[i] == ' ')
			i++;

		/* Count the word */
		if (str[i] && str[i] != ' ')
			count++;

		/* Skip to the next word */
		while (str[i] && str[i] != ' ')
			i++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	int i = 0, j = 0, k = 0, len = 0;
	char **words = NULL;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	/* Allocate memory for the array of words */
	words = malloc((count_words(str) + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	/* Split the string into words */
	while (str[i])
	{
		/* Skip any leading spaces */
		while (str[i] && str[i] == ' ')
			i++;

		/* Get the length of the word */
		len = 0;
		while (str[i + len] && str[i + len] != ' ')
			len++;

		/* Allocate memory for the word */
		words[j] = malloc((len + 1) * sizeof(char));
		if (words[j] == NULL)
		{
		/* Free the memory allocated for previous words */
			for (k = 0; k < j; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		/* Copy the word into the array */
		strncpy(words[j], str + i, len);
		words[j][len] = '\0';
		j++;

		/* Skip to the next word */
		i += len;
	}

	/* Add a NULL terminator to the end of the array */
	words[j] = NULL;

	return (words);
}

