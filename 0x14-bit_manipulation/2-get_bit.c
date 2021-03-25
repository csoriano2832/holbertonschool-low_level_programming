#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: a decimal number
 * @index: index starting from 0 of the bit you want to get
 *
 * Return: nothing
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int idx;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	for (idx = 0; idx < index; idx++)
		n = n >> 1;

	return (n & 1);
}
