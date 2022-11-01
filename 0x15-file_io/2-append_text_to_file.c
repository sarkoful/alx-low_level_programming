#include "main.h"

/**
 * append_text_to_file - does what it says
 * @filename: name of file to open and append new content to
 * @text_content: content to append to file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, writer;
	long int len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		writer = write(fd, text_content, len);

		if (writer == -1)
			return (-1);
	}
	if (close(fd) == -1)
		return (-1);

	return (1);
}
