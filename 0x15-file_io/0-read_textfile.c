#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytesread, byteswritten;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));

	if (buf == NULL)
		return (0);

	bytesread = read(fd, buf, letters);
	byteswritten = write(STDOUT_FILENO, buf, bytesread);

	close(fd);

	free(fd);

	return (byteswritten);
}
