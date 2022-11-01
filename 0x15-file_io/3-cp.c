#include "main.h"
/**
 * main - function that houses our cp program
 * @argc: - count of arguments
 * @argv: - array of arguments
 * Return: a bunch of error codes starting at 97, 0 if it works tho
 */
int main(int argc, char **argv)
{
	int fdsource, fddest, reader, writer, err;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdsource = open(argv[1], O_RDONLY);
	if (fdsource == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
	fddest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fddest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((reader = read(fdsource, buffer, 1024)) > 0)
	{
		writer = write(fddest, buffer, reader);
		if (writer == -1 || writer != reader)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (reader == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
	err = _closeerror(fdsource);
	err += _closeerror(fddest);
	if (err != 0)
		exit(100);
	return (0);
}

/**
 * _closeerror - function to check and print error messages at closure
 * @fd: fd for either source or destination
 * Return: 100 if error, 0 if no error
 */

int _closeerror(int fd)
{
	int error;

	error = close(fd);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		return (100);
	}
	return (0);
}
