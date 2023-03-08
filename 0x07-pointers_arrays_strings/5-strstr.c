#include <stddef.h>

/**
 * _strstr - a function that locates a substring
 *
 * Description: function finds the first occurrence of the substring needle in
 *	the string haystack. The terminating null bytes (\0) are not compared
 * @haystack: the string to scan
 * @needle: the substring to look for
 * Return: Returns a pointer to the beginning of the located substring,
 *	or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i] != '\0'i && *needle = '\0')
	{
		if (haystack[i] == needle[0])
		{
			while (needle[j] == haystack[i + j])
			{
				j++;
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
			j = 0;
		}
		i++;
	}
	return (NULL);

}
