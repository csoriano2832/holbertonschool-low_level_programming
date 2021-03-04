#include "holberton.h"
unsigned int _strlen(char *str);

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: specified bytes of s2
 *
 * Return: pointer to new allocated space in memory
 * If function fails, returns NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int s1_len, s2_len;
	unsigned int idx, jdx, concat_len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	if (n >= s2_len)
		concat_len = s1_len + s2_len;
	else
		concat_len = s1_len + n;

	concat_str = malloc(sizeof(char) * (concat_len + 1));
	if (concat_str == NULL)
		return (NULL);

	for (idx = 0; s1[idx] != '\0'; idx++)
		concat_str[idx] = s1[idx];

	if (n < s2_len)
	{
		for (jdx = 0; jdx < n; jdx++)
		{
			concat_str[idx] = s2[jdx];
			idx++;
		}
	}
	else
	{
		for (jdx = 0; s2[jdx] != '\0'; jdx++)
		{
			concat_str[idx] = s2[jdx];
			idx++;
		}
	}
	concat_str[idx] = '\0';

	return (concat_str);
}

/**
 * _strlen - return the lenght of a string
 * @str: pointer to a char
 *
 * Return: number of characters in the string
 */
unsigned int _strlen(char *str)
{
	unsigned int len;

	for (len = 0; *str != '\0'; str++)
		len++;
	return (len);
}
