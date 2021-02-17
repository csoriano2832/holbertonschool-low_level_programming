#include "holberton.h"

/**
 * *_strcpy - copies the string pointed by src, including the terminating null
 * byte to the buffer pointed to by dest
 * @dest: pointer to a char
 * @src: pointer to another char
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;


	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
