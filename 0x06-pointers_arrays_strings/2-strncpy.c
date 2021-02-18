#include "holberton.h"

/**
 * _strncpy - takes one string and copies it into another
 * @dest: where the string will be copied
 * @src: the string that will be copied
 * @n: the number of bytes of the string that will be copied
 *
 * Return: the new string after being copied
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
		i++;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}

	if (i < n)
	{
		for (; i < n; i++)
		{
			dest[i] = '\0';
		}
	}

	return (dest);
}
