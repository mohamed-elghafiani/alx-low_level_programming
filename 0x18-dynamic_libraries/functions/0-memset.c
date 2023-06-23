
/**
 * _memset - a function that fills memory with a constant byte
 *
 * @s: a pointer to the location of memory to fill
 * @b: The constant byte to use for filling
 * @n: The n furst bytes of fill
 * Return: Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
