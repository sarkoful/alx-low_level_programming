#include "main.h"

/**
 * create_file - function to create a file
 * @filename: - name of file to be created
 * @text_content: - text to be written into the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	long int writer;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);


	if (text_content != NULL)
	{
		/* get length of text content*/
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
