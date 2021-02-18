#include "holberton.h"

/**
  * string_toupper - converts a lowercase string into an uppercase string
  * @str: string to be converted
  *
  * Return: the string in uppercase
  */
char *string_toupper(char *str)
{
	int idx;

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		if (str[idx] >= 'a' && str[idx] <= 'z')
			str[idx] = str[idx] - 32;
	}
	return (str);
}

