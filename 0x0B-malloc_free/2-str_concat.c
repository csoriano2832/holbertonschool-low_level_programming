#include "holberton.h"
#include <stdlib.h>

/**
  * str_concat - concatenates two strings
  * @s1: string to be concatenated
  * @s2: string to be concatenated
  *
  * Return: the concatenated string
  */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	int idx, jdx, len = 0;

	if (s1 == NULL)
		s1 = "";
	for (idx = 0; s1[idx] != '\0'; idx++)
	{
		len++;
	}

	if (s2 == NULL)
		s2 = "";
	for (idx = 0; s2[idx] != '\0'; idx++)
	{
		len++;
	}

	cat = malloc((sizeof(char) * len) + 1);
	if (cat == NULL)
		return (NULL);

	for (idx = 0; s1[idx] != '\0'; idx++)
	{
		cat[idx] = s1[idx];
	}

	for (jdx = 0; idx <= len; idx++)
	{
		cat[idx] = s2[jdx];
		jdx++;
	}

	return (cat);
}
