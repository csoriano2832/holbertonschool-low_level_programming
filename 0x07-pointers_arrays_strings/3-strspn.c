#include "holberton.h"

/**
  * _strspn - gets the length of a prefix substring
  * @s: the string to be examined
  * @accept: the characters to check for in s
  * Return: the number of characters accepted before stopping
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int idx, jdx, count;

	count = 0;
	for (idx = 0; s[idx] != '\0'; idx++)
	{
		for (jdx = 0; accept[jdx] != '\0'; jdx++)
		{
			if (accept[jdx] == s[idx])
			{
				count++;
				break;
			}
		}
		if (accept[jdx] == '\0')
			break;
	}

	return (count);
}
