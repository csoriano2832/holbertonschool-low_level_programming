#include "holberton.h"

/**
 * check_palindrome - check for palindrome
 * @str: string
 * @idx: starting point
 * @len: length of string
 *
 * Return: 1 if it's palindrome 0 if it's not
 */
int check_palindrome(char *str, int idx, int len)
{
	if (idx == len)
		return (1);

	if (str[idx] != str[len - (idx + 1)])
		return (0);

	return (check_palindrome(str, idx + 1, len));
}

/**
 * _strlen - gets length of string
 * @str: string
 *
 * Return: 1 if it's palindrome 0 if it's not
 */
int _strlen(char *str)
{
	int len;

	if (*str == '\0')
		return (0);

	len = _strlen(str + 1);
	return (len + 1);
}

/**
 * is_palindrome - check for palindrome
 * @str: reverse string
 *
 * Return: 1 if it's palindrome 0 if it's not
 */
int is_palindrome(char *str)
{
	int len = _strlen(str);
	int idx = 0;

	if (*str == '\0')
		return (1);

	return (check_palindrome(str, idx, len));
}
