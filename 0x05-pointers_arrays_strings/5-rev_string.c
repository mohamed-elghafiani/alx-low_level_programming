#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - a function that reverse a string
 *
 * @s: the string to reverse
 * Return: Nothing.
 */

void rev_string(char *s)
{
	int len_s = 0, i;
	char *tmp = "";

	strcpy(tmp, s);
	
	printf("this is string: %s\n", s);

	while (*(s + len_s) != '\0')
	{
		len_s++;
	} 

	for (i = 0; i < len_s; i++)
	{
		s[i] = tmp[len_s - i - 1];
	}


	printf("this is string: %s\n", s);
	printf("this is tmp: %s\n", tmp);

}
