#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to a char
 *
 * Return: null
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	for (; i > 0; i--)
	{
		_putchar(s[i - 1]);
	}
	_putchar('\n');
}
