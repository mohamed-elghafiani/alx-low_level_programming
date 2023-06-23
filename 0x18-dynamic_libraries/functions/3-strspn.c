
/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: the string to scan
 * @accept: the substring of characters to search for
 * Return: returns the first  occurence of the character in @s
 * but not in @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (*(s + i) != '\0')
	{
		while (*(accept + j) != '\0')
		{
			if (accept[j] == s[i])
			{
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			return (i);
		}
		j = 0;
		i++;
	}
	if (s[i] == '\0')
	{
		return (i);
	}
	return (0);
}
