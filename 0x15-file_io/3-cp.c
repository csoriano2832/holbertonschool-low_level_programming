#include "holberton.h"

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


/**
 * main - copies the content of a file to another file
 * @ac: number of arguments
 * @av: string of arguments
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int file_from, file_to;
	size_t bytes = 0;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	bytes = read(file_from, buf, 1024);

	close(file_from);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", file_from);
		exit(100);
	}

	file_to = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 00664);
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	write(file_to, buf, bytes);

	close(file_to);
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", file_to);
		exit(100);
	}

	return (0);
}
