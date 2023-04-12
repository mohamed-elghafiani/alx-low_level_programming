#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * append_to_file - a function that append text to a file
 *
 * Description: Create a function that append text to a file
 *	If the file already exists, do not change the permissions.
 *	if the file already exists, truncate it
 * @filename:  is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * @count: number of characters to append to file
 * Return: 1 on success
 */

int append_to_file(const char *filename, char *text_content, int count)
{
	int o, w;

	o = open(filename, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 00664);
	if (o == -1)
	{
		dprintf(2, "Error: A  Can't write to %s\n", filename);
		return (99);
	}
	w = write(o, text_content, count);
	if (w == -1)
	{
		dprintf(2, "Error: O Can't write to %s\n", filename);
		close(o);
		return (99);
	}
	close(o);
	return (1);
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
	char *buffer;
	int o1, ow;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	o1 = open(argv[1], O_RDONLY);
	if (o1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	buffer = malloc(1024);
	if (read(o1, buffer, 1024) == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		close(o1);
		exit(98);
	}
	ow = append_to_file(argv[2], buffer, 1024);
	if (ow != 1)
	{
		close(o1);
		exit(ow);
	}
	close(o1);
	return (0);
}


