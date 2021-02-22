#include "holberton.h"

/**
  * _memset - fills memory specified with a constant char
  * @s: pointer to a char array
  * @b: the character that will fill the array
  * @n: the number of bytes to fill in the array
  * Return: the pointer to the array
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int idx;

	idx = 0;
	while (idx < n)
	{
		s[idx] = b;
		idx++;
	}

	return (s);
}
