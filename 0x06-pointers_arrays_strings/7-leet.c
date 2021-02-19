#include "holberton.h"

/**
  * leet - encodes a string in 1337 (leet)
  * @str: the string to be encoded
  *
  * Return: the string after it has been encoded
  */
char *leet(char *str)
{
	int idx, jdx;
	char arr1[] = "aAeEoOtTlL";
	char arr2[] = "4433007711";

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		for (jdx = 0; arr1[jdx] != '\0'; jdx++)
		{
			if (str[idx] == arr1[jdx])
				str[idx] = arr2[jdx];
		}
	}
	return (str);
}
