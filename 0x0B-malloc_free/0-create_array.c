#include <stdlib.h>
#include "holberton.h"

/**
  * create_array - creates an array of chars
  * initialize with a specific char
  * @size: the size of the memory to print
  * @c: the character to initialize with
  *
  * Return: Pointer to the array
  * NULL, if it fails
  */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int idx;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);

	for (idx = 0; idx < size; idx++)
		str[idx] = c;

	return (str);
}
