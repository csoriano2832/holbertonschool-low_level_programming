#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: pointer to a char
 *
 * Return: null
 */
void rev_string(char *s)
{
	char *end, temp;

	end = s;
	while (*end != '\0')
		end++;

	end -= 1;
	temp = '0';
	while (end > s)
	{

		temp = *end;
		*end = *s;
		*s = temp;
		s++;
		end--;
	}
}
