#include <stdio.h>
#include <stdlib.h>

/**
  * main - a function that prints its own opcodes
  * @argc: the number of arguments passed
  * @argv: array containing the arguments as strings
  *
  * Return: 0 if program succeeds, else error handler
  * will exit with status 1 or 2.
  */
int main(int argc, char *argv[])
{
	char *opcode = (char *) &main;
	unsigned int i;
	int bytes = 0;
	char *separator = " ";

	if (argv == NULL)
		return (0);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx", opcode[i]);
		if (i != (bytes - 1))
			printf("%s", separator);
	}
	printf("\n");
	return (0);
}
