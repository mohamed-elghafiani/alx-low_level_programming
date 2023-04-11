#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file
 *	and prints it to the POSIX standard output
 *
 * @filename: a pointer to the file
 * @letters:  is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 *	or 0 if something goes wrong
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *f;
	char *s;
	ssize_t count;

	if (filename == NULL)
	{
		return (0);
	}

	f = fopen(filename, "r");
	if (!f)
	{
		return (0);
	}
	s = malloc(sizeof(char) * letters);
	if (!s)
	{
		return (0);
	}
	count = fread(s, sizeof(char), letters, f);
	printf("%s\n", s);
	free(s);
	fclose(f);

	return (count);
}
