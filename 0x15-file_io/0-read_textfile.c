#include "main.h"

/**
 * read_textfile - reads a text file
 * and prints it to the POSIX standard output.
 * @filename: file Path
 * @letters: number of letters it should read and print.
 *
 * Return: returns the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char buf[BUF_SIZE * 8];

	if (!filename || !letters)
	return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	return (0);

	bytes = read(fd, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(fd);

	return (bytes);
}
