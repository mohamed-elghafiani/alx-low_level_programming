
/**
 * rot13 - a function that encodes a string using rot13
 *
 * @str: the string to encode
 * Return: a pinter to the encoded string
 */

char *rot13(char *str)
{
	int i = 0, j = 0;
	char *charct = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *encd = "NOPQRSTUVWXYZABCDEFGHIJKLMnpqrstuvwxyz00000000000000";
	/*char *encd = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";*/

	while (str[i] != '\0')
	{
		while (charct[j] != '\0')
		{
			if (str[i] == charct[j])
			{
				str[i] = encd[j];
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (str);
}
