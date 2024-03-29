#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

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
	char *buffer;
	ssize_t rcount, wcount;
	int fd;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	rcount = read(fd, buffer, letters);
	close(fd);
	if (rcount == -1)
	{
		free(buffer);
		return (0);
	}
	wcount = write(STDOUT_FILENO, buffer, rcount);
	if (wcount == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);

	return (wcount);
}

