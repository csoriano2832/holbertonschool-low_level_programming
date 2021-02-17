#include "holberton.h"

/**
  * puts2 - prints every other character of a string
  * @str: pointer to a char
  *
  * Return: null
  */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
