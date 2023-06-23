
/**
 * _strcmp - a function that compares two strings
 *
 * @s1: the first string
 * @s2: the second string
 * Return: returns an int less than, equal, or greater than 0 if
 *	,respectively, s1 is found less, equal, or greate than s2
 *
 */


int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] - s2[i] != 0)
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
