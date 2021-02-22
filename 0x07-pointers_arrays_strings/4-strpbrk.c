#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to be evaluated
 * @accept: the characters to search within the string
 * Return: the string after being evaluated
 */
char *_strpbrk(char *s, char *accept)
{
	int idx;

	while (*s != '\0')
	{
		for (idx = 0; accept[idx] != '\0'; idx++)
		{
			if (*s == accept[idx])
			{
				return (s);
			}
		}
		s++;
	}

	return ('\0');
}
