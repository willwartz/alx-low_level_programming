#include "main.h"
#include <stdio.h>

/**
 * error_check - prints error message and exits
 * @error: error code
 * @file: file name
 */
void error_check(int error, char *file)
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
	}
	exit(error);
}

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
		error_check(98, file_from);

	if (fd_to == -1)
		error_check(99, file_to);

	numChars = 1024;
	while (numChars == 1024)
	{
		numChars = read(fd_from, buff, 1024);
		if (numChars == -1)
			error_check(98, file_from);

		numWritten = write(fd_to, buff, numChars);
		if (numWritten == -1)
			error_check(99, file_to);
	}

	closeError = close(fd_from);
	if (closeError == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	closeError = close(fd_to);
	if (closeError == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
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
		error_check(97, NULL);

	copy_file(argv[1], argv[2]);

	return (0);
}
