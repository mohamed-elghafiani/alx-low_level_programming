#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - a function that concatenates all the arguments of your program
 *
 * @ac: arguments count
 * @av: arguments vector
 * Return: a pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int len = 0, i, j, l;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	j = 0;
	for (i = 0; i < ac; i++)
	{
		l = strlen(av[i]);
		strncpy(&str[j], av[i], l);
		str[j + l] = '\n';
		j += l + 1;
	}
	return (str);
}
