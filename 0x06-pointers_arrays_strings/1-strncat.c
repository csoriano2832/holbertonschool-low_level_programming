#include "holberton.h"

/**
 * _strncat - concatenates two string at n bytes from src
 * @dest: string where src will be concatenated
 * @src: string to concatenate
 * @n: number of bytes from src to concatenate
 *
 * Return: new dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; j != n; j++)
	{
		if (src[j] == '\0')
			break;
		dest[i + j] = src[j];
	}

	return (dest);
}
