#include "holberton.h"

/**
  * rot13 - encodes a string using rot13 encryption
  * @str: string to be encrypted
  *
  * Return: the string after it has been encrypted
  */
char *rot13(char *str)
{
	int idx, jdx;
	char arr1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arr2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		for (jdx = 0; arr1[jdx] != '\0'; jdx++)
		{
			if (str[idx] == arr1[jdx])
			{
				str[idx] = arr2[jdx];
				break;
			}
		}
	}
	return (str);
}
