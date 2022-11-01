#include "main.h"

/**
 * read_textfile - function to read a text file and print it to the
 * POSIX standard output
 * @filename: file to be read
 * @letters: number of letters to be read
 * Return: the number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, reader, writer;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	reader = read(fd, buffer, letters);
	if (reader == -1)
		return (0);

	writer = write(STDOUT_FILENO, buffer, reader);
	if (writer == -1)
		return (0);
	if (close(fd) == -1)
		return (0);
	free(buffer);

	return (reader);
}
