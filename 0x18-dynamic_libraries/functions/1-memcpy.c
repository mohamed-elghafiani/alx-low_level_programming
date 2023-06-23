
/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 *
 * @dest: a poinetr to the dest memory area
 * @src: a pointer to the src memory area
 * @n: the number of btytes to copy
 * Return: Returns a pointer to des
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
