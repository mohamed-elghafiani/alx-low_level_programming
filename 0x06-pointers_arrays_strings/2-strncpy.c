/**
 * _strncpy - function that copied n bytes from @src to @dest 
 *
 * @src: Source string
 * @dest: destination string
 * @n: the number of bytes to copy
 * Return: returns a pointer to the resulted string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
