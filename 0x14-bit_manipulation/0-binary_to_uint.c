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
	unsigned int decimal = 0, exponent = 0;
	unsigned int base = 2;

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
		{
			decimal += _pow_recursion(base, exponent);
		}
		exponent++;
	}
	return (decimal);
}

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: a number
 * @y: an exponent
 * Return: On success the result of x raised to y
 * -1 on error
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x = x * _pow_recursion(x, y - 1));
}
