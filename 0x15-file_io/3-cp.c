#include "main.h"
#include <stdio.h>

/**
 * copy_file - copies the content of a file to another file
 * @file_from: file to copy from
 * @file_to: file to copy to
 * Return: void
*/
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, closeError;
	char buff[1024];
	ssize_t numChars, numWritten;

	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	if (fd_from == -1)
		exit(98);

	if (fd_to == -1)
		exit(99);

	numChars = 1024;
	while (numChars == 1024)
	{
		numChars = read(fd_from, buff, 1024);
		if (numChars == -1)
		exit(98);

		numWritten = write(fd_to, buff, numChars);
		if (numWritten == -1)
		exit(99);
	}

	closeError = close(fd_from);
	if (closeError == -1)
		exit(100);

	closeError = close(fd_to);
	if (closeError == -1)
		exit(100);
}

/**
 * error_exit - prints error message and exits
 * @error: error code
 * @file: file name
 */
void error_exit(int error, char *file)
{
	switch (error)
	{
		case 97:
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		break;
		case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		break;
		case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		break;
		case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		break;
	}
	exit(error);
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 97, 98, 99, 100 on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		error_exit(97, NULL);

	copy_file(argv[1], argv[2]);

	return (0);
}
