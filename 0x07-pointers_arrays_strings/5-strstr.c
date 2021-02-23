#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack: a string
 * @needle: a substring to look within haystack
 * Return: a pointer to the beginning of the located substring
 * NULL if substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *match;
	int idx;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		if (*needle == *haystack)
		{
			match = haystack;

			for (idx = 0; needle[idx] == *haystack; idx++)
				haystack++;

			if (needle[idx] == '\0')
				return (match);
		}
		haystack++;
	}
	return ('\0');
}
