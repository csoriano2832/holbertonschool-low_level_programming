#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string of 0  and 1 chars
 *
 * Return: the converted number, or 0
 * if there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int index, length = 0;
	unsigned int decimal = 0, exponent = 0, bit = 0;

	if (b == NULL)
		return (0);

	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] == '0' || b[index] == '1')
			length++;
		else
			return (0);
	}

	for (length = length - 1; length >= 0; length--)
	{
		if (b[length] == '1')
			bit = 1;
		else if (b[length] == '0')
			bit = 0;

		decimal += bit << exponent;
		exponent++;
	}
	return (decimal);
}
