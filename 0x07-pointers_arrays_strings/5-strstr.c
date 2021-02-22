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
	char *start;

	start = needle;
	while (*haystack)
	{
		needle = start;
		while (*needle == *haystack)
		{
			needle++;
			haystack++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack++;
	}
	return ('\0');
}
