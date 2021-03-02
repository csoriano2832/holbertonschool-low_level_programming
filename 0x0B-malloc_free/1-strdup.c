#include <stdlib.h>
#include "holberton.h"

/**
  * _strdup - returns a duplicate of a given string
  * @str: a string
  *
  * Return: a pointer to the duplicate string
  */
char *_strdup(char *str)
{
	int idx, len = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		len++;
	}

	dup = malloc(sizeof(char) * len);
	if (dup == NULL)
		return (NULL);

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		dup[idx] = str[idx];
	}
	dup[idx] = '\0';

	return (dup);
}
