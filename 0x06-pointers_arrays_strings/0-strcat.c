#include "holberton.h"

/**
 * *_strcat - concatenates two string
 * @dest: where src will be appended
 * @src: string to be appended
 *
 * Return: dest after src has been appended
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	return (dest);
}
