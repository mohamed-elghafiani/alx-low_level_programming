/**
 * cap_string - a function that capitalizes all words of a string
 *
 * @str: the string to capitalize
 * Return: returns a pointer to the resulted string
 */

char *cap_string(char *str)
{
	int i = 0, j;
	int is_sep = 0;
	char sep[15] = {'\t', '\v', ' ', '\n', ',', ';', '.', '!', '?', '"', '('};

	sep[11] = '(';
	sep[12] = ')';
	sep[13] = '{';
	sep[14] = '}';

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] + ('A' - 'a');
	}

	while (str[i] != '\0')
	{
		for (j = 0; j < 15; j++)
		{
			if (str[i] == sep[j] && is_sep != 1)
			{
				is_sep = 1;
			}
		}

		if (is_sep == 1 && str[i + 1] >= 'a' && str[i + 1] <= 'z')
		{
			str[i + 1] = str[i + 1] + ('A' - 'a');
		}

		i++;
		is_sep = 0;
	}
	return (str);
}
