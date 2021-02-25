#include "holberton.h"

/**
 * palindrome_check - check for palindrome
 * @s: reverse string
 * @i: normal string
 *
 * Return: 1 if it's palindrome 0 if it's not
 */
int palindrome_check(char *s, char *i)
{
	if (*s != *i)
		return (0);

	if (*s == *i)
		palindrome_check(s - 1, i + 1);
	return (1);

}

/**
 * palindrome_mover - reverses string
 * @s: reverse string
 * @i: normal string
 *
 * Return: 1 if it's palindrome 0 if it's not
 */
int palindrome_mover(char *s, char *i)
{
	int count = 0;

	if (*s == '\0')
		palindrome_mover(s + 1, i);

	count = count + palindrome_check(s - 1, i);
	return (count);
}

/**
 * is_palindrome - check for palindrome
 * @s: reverse string
 *
 * Return: 1 if it's palindrome 0 if it's not
 */
int is_palindrome(char *s)
{
	char *i;

	i = s;

	if (*s == '\0')
		return (1);

	return (palindrome_mover(s, i));
}
