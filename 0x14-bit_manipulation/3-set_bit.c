#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a decimal number
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error ocurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setBit;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	setBit = 1 << index;
	*n = (*n | setBit);

	return (1);
}
