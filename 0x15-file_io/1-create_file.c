#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: a file
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, index;
	size_t count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT, 00600);
		if (fd == -1)
			return (-1);
		return (1);
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);

	index = 0;
	while (text_content[index])
	{
		index++;
		count++;
	}

	write(fd, text_content, count);

	close(fd);
	return (1);
}
