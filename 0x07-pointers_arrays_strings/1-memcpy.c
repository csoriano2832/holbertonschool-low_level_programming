#include "holberton.h"

/**
  * _memcpy - copy specified bytes from one array to another
  * @dest: the array where the characters will be copied to
  * @src: the array where the characters will copy from
  * @n: the number of bytes to copy from the src array
  * Return: the dest array after being copied
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx;

	idx = 0;
	while (idx < n)
	{
		*(dest + idx) = src[idx];
		idx++;
	}

	return (dest);
}
