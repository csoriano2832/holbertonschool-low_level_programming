#include "holberton.h"

/**
  * _strlen - return the lenght of a string
  * @s: pointer to a char
  *
  * Return: number of characters in the string
  */
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}
