
/**
 * leet - a function that encodes a string into 1337
 *
 * @str: the string to encode
 * Return: a pinter to the encoded string
 */

char *leet(char *str)
{
	int i = 0, j;
	char encd[17] = {'o', 'l', '?', 'e', 'a', '?', '?', 't'};

	encd[8] = 'O';
	encd[9] = 'L';
	encd[10] = '?';
	encd[11] = 'E';
	encd[12] = 'A';
	encd[13] = '?';
	encd[14] = '?';
	encd[15] = 'T';

	while (str[i])
	{
		for (j = 0; j < 16; j++)
		{
			if (str[i] == encd[j])
			{
				str[i] = j % 8 + '0';
			}
		}
		i++;
	}
	return (str);
}
