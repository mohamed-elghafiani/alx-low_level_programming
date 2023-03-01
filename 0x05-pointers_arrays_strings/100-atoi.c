/**
 * _atoi - a function that converts a string to an int
 *
 * @s: the string to convert to int
 * Return: the integer value of the string passed
 */
int _atoi(char *s)
{
	int value = 0, i = 0, len_nbrs = 1, occur = 0, sign = 1;

	while (*(s + i) != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9' && occur <= 1)
		{
			len_nbrs *= 10;
			if (s[i - 1] <= '0' || s[i - 1] >= '9')
			{
				occur++;
			}
		}
		i++;
	}
	i = occur = 0;
	len_nbrs = len_nbrs / 10;
	while (s[i] != '\0')
	{
		if (occur <= 1)
		{
			if (s[i] >= '0' && s[i] <= '9')
			{
				value += (s[i] - '0') * len_nbrs;
				len_nbrs /= 10;
				if (s[i - 1] <= '0' || s[i - 1] >= '9')
				{
					occur++;
				}
			}
			else if (s[i] == '-')
			{
				sign = -sign;
			}
		}
		i++;
	}
	return (sign * value);
}
