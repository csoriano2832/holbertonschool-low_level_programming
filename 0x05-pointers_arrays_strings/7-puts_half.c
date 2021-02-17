#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to a char
 *
 * Return: null
 */
void puts_half(char *str)
{
	int i, len, n;

	len = n = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	if ((len % 2) != 0)
		n = (len - 1) / 2;
	else
		n = len / 2;

	for (str += n; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
