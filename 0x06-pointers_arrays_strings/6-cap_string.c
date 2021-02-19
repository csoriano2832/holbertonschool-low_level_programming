#include "holberton.h"

/**
 * cap_string - capitalizes every word in a string
 * @str: the string that will be transformed
 *
 * Return: the string after every word has been capitalized
 */
char *cap_string(char *str)
{
	int idx = 0;

	while (str[idx])
	{
		while (!(str[idx] >= 'a' && str[idx] <= 'z'))
			idx++;
		if (str[idx - 1] == ' ' || str[idx - 1] == '\t' || str[idx - 1] == '\n'
				|| str[idx - 1] == ',' || str[idx - 1] == ';'
				|| str[idx - 1] == '.' || str[idx - 1] == '!'
				|| str[idx - 1] == '?' || str[idx - 1] == '"'
				|| str[idx - 1] == '(' || str[idx - 1] == ')'
				|| str[idx - 1] == '{' || str[idx - 1] == '}' || idx == 0)
			str[idx] = str[idx] - 32;
		idx++;
	}
	return (str);
}
