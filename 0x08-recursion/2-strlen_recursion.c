
/**
 * _strlen_recursion - a function that returns the length of a string
 *
 * @s: a pointer to the string whose length to compute
 * Return: returns the length of the string pointed to by @s
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (!*s)
	{
		return (0);
	}

	i = 1 + _strlen_recursion(s + 1);

	return (i);
}
