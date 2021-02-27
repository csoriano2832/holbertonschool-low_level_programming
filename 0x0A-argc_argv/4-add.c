#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive numbers
 * @argc: numbers of command line arguments passed to it
 * @argv: pointer to string array containing the arguments
 *
 * Return: 0 on success
 * Otherwise, return 1 on error.
 */
int main(int argc, char *argv[])
{
	char *str;
	int idx, jdx, result = 0;

	if (argc == 1)
		printf("0\n");

	else
	{
		for (idx = 1; idx < argc; idx++)
		{
			str = argv[idx];
			for (jdx = 0; str[jdx] != '\0'; jdx++)
			{
				if (!isdigit(str[jdx]))
				{
					printf("Error\n");
					return (1);
				}
			}
			result += atoi(str);
		}
		printf("%d\n", result);
	}
	return (0);
}
