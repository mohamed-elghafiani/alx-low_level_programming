/**
 * string_toupper - a function that changes all lowercase letters
 *	of a string to uppercase
 *
 * @c: a string
 * Return: returns a pointer to the resulted string
 */


char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] + ('A' - 'a');
		}
		i++;
	}

	return (c);
}
