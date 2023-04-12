#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file - a function that appends text at the end of a file
 *
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fo;
	size_t count;

	if (filename == NULL)
	{
		return (-1);
	}
	fo = fopen(filename, "a");
	if (fo == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		fclose(fo);
		if (fo == NULL)
		{
			return (-1);
		}
		return (1);
	}
	count = fwrite(text_content, sizeof(char), strlen(text_content), fo);
	if (count != strlen(text_content))
	{
		fclose(fo);
		return (-1);
	}
	fclose(fo);
	return (1);
}

/**
 * create_file - a function that creates a file
 *
 * Description: Create a function that creates a file.
 *	The created file must have those permissions: rw-------.
 *	If the file already exists, do not change the permissions.
 *	if the file already exists, truncate it
 *	if filename is NULL return -1
 *	if text_content is NULL create an empty file
 * @filename:  is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int o, w;

	if (filename == NULL)
	{
		return (-1);
	}
	o = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (o == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(o);
		return (1);
	}
	w = write(o, text_content, strlen(text_content));
	if (w == -1)
	{
		close(o);
		return (-1);
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
	int o1, o2;

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
	o2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
	if (o2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(o1);
		exit(99);
	}
	buffer = malloc(1024);
	if (read(o1, buffer, 1024) == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		close(o1);
		close(o2);
		exit(98);
	}
	while (1)
	{
		if (write(o2, buffer, 1024) == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close(o1);
			close(o2);
			exit(99);
		}
	}
	close(o1);
	close(o2);
	return (0);
}


