/**
 * _strcat - a function that concatenate two strings
 *
 * @dest: The destination string which we will append to
 * @src: The source string that will be appended to @dest
 * Return: returns a pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	/* Destermining where @src should be append */
	while (dest[i] != '\0')
	{
		i++;
	}
	/* appending @src to @dest */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
