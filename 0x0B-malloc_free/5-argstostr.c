#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array containing the arguments
 *
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	char *newString;
	int idx, jdx, kdx = 0, length = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (idx = 0; av[idx] != '\0'; idx++)
	{
		for (jdx = 0; av[idx][jdx] != '\0'; jdx++)
		{
			length++;
		}
		length++;
	}

	newString = malloc(sizeof(char) * (length + 1));
	if (newString == NULL)
		return (NULL);

	for (idx = 0; av[idx] != '\0'; idx++)
	{
		for (jdx = 0; av[idx][jdx] != '\0'; jdx++)
		{
			newString[kdx] = av[idx][jdx];
			kdx++;
		}
		newString[kdx] = '\n';
		kdx++;
	}
	return (newString);
}
