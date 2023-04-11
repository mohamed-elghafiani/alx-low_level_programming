#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

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
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 600);
	if (o == -1)
	{
		return (0);
	}
	if (text_content == NULL)
	{
		close(o);
		return (1);
	}
	w = write(o, text_content, sizeof(text_content));
	if (w == -1)
	{
		printf("NULL write\n");
		close(o);
		return (-1);
	}
	close(o);
	return (1);
}
