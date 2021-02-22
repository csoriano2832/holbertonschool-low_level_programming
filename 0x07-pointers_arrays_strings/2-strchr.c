#include "holberton.h"

/**
  * _strchr - locates the first instance of a character in a string
  * @s: the string that will be evaluated
  * @c: the character to be located in the string
  * Return: the pointer to the string
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		s++;
		if (*s == '\0')
			break;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
