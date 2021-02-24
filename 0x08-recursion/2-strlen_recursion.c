#include "holberton.h"

/**
  * _strlen_recursion - returns the length of a string
  * @s: pointer to a string
  * Return: the length of a string as an int
  */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		count += _strlen_recursion(++s);
	}

	return (count);
}
