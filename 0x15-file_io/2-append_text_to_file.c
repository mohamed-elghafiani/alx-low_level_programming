#include <string.h>
#include <stdio.h>

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
