#include <stdio.h>
#include "main.h"

/**
 * _strlen - a funtion that returns the length of a string
 *
 * @s: the string whose length would be calculated
 * Return: the length of the string passed (int)
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
