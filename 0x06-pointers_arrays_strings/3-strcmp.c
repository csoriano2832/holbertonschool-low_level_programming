#include "holberton.h"

/**
  * _strcmp - compares characters in two strings
  * @s1: first string
  * @s2: second string
  *
  * Return: Negative number if s2 is greater than s1.
  * Positive number if s2 is lesser than s1.
  * 0 if s1 and s2 are the same.
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
		if (s1[i] == '\0')
			return (0);
	return (s1[i] - s2[i]);
}
