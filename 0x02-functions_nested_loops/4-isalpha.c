#include "holberton.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: character to check
 *
 * Return: On success, 1
 * On error, 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
