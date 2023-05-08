#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - a function that reads a text file
 *      and prints it to the POSIX standard output
 *
 * @filename: a pointer to the file
 * @letters:  is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 *      or 0 if something goes wrong
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *f;
	char *buffer;
	ssize_t count;
	
	if (filename == NULL)
	{
		return (0);
	}

	f = fopen(filename, "r");
	if (f == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		fclose(f);
		return (0);
	}
	count = fread(buffer, sizeof(char), letters, f);
	if (count == -1)
	{
		free(buffer);
		fclose(f);
		return (0);
	}
	printf("%s", buffer);
	free(buffer);
	fclose(f);

	return (count);
}

