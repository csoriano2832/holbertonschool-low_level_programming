#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to STDOUT
 * @filename: a file
 * @letters: number of bytes to read from file
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t bytes;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	/* READ FROM FILE */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytes = read(fd, buf, letters);

	close(fd);

	/* WRITE TO OUTPUT */
	write(STDOUT_FILENO, buf, letters);

	free(buf);
	return (bytes);
}
