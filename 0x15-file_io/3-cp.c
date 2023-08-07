#include "main.h"

#define USAGE "cp file_from file_to\n"
#define ERR_NOREAD "ERROR: Can't read from file %s\n"
#define ERR_NOWRITE "ERROR: Can't write to file %s\n"
#define ERR_NOCLOSE "ERROR: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR, S_IWUSR, S_IRGRP, S_IWGRP, S_IROTH)


/**
 * main - copies the content of a file to another file.
 * @argc: arguments count.
 * @argv: arguments values.
 *
 * Return: 1 on success, 0 on failure.
 */


int main(int argc, char **argv)
{
	int from_fd = 0, to_fd = 0;
	ssize_t b;

	char buf[BUF_SIZE];

	if (argc != 3)
	dprintf(STDERR_FILENO, USAGE), exit(97);

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
	dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);

	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_fd == -1)
	dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);

	while ((b = read(from_fd, buf, BUF_SIZE)) > 0)
	if (write(to_fd, buf, b) != b)
	dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);

	if (b == -1)
	dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);

	from_fd = close(from_fd);
	to_fd = close(to_fd);

	if (from_fd)
	dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fd), exit(100);

	if (to_fd)
	dprintf(STDERR_FILENO, ERR_NOCLOSE, to_fd), exit(100);

	return (EXIT_SUCCESS);

}
