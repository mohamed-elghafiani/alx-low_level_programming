#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

#define BUFFER_SIZE 1024

/**
 * usage_error - a function that gets called when
 *      the number of argument is not the correct one
 *
 * @filename: is a string representing the filename
 * Return: Nothing
 */
void usage_error(char *filename)
{
	dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", filename);
	exit(97);
}

/**
 * read_error - a function that gets called when an error occured
 *      while reading data from the source file
 *
 * @filename: is a string representing the filename
 * Return: Nothing
 */
void read_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}
/**
 * write_error - a function that gets called when an error occured
 *      while writing to the destination file
 *
 * @filename: is a string representing the filename
 * Return: Nothing
 */
void write_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * close_error - a function that gets called when an error occured
 *      while closing a file
 *
 * @fd: is an integer representing the file descriptor
 * Return: Nothing
 */
void close_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
/**
 * main - a program that copies the content of a file to another file
 *
 * @argc: number of arguments passed
 * @argv: a vector of the arguments passed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE];
	int o1, o2, w, r, c1, c2;

	if (argc != 3)
	{
		usage_error(argv[0]);
	}
	o1 = open(argv[1], O_RDONLY);
	if (o1 == -1)
	{
		read_error(argv[1]);
	}
	o2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (o2 == -1)
	{
		write_error(argv[2]);
	}
	do {
		r = read(o1, buffer, BUFFER_SIZE);
		if (r == -1)
		{
			read_error(argv[1]);
		}
		w = write(o2, buffer, r);
		if (w == -1)
		{
			write_error(argv[2]);
		}
	} while (r > 0);
	c1 = close(o1);
	if (c1 == -1)
	{
		close_error(o1);
	}
	c2 = close(o2);
	if (c2 == -1)
	{
		close_error(o2);
	}
	return (0);
}


