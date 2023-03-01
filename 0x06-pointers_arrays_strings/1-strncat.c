/**
 * _strncat - a function that concatenate two strings
 *
 * @dest: The destination string which we will append to
 * @src: The source string whose at most @n bytes will be appended to @dest
 * @n: number of bytes of @src to append to @dest
 * Return: returns a pointer to the resulting string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	/* Destermining where @src should be append */
	while (dest[i] != '\0')
	{
		i++;
	}
	/* appending @src to @dest */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
