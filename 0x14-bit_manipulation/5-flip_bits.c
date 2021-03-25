#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another
 *
 * @n: one decimal number
 * @m: second decimal number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipBit = 0, bitNum = 0;

	flipBit = n ^ m;

	while (flipBit > 0)
	{
		if ((flipBit & 1) == 1)
			bitNum++;

		flipBit >>= 1;
	}

	return (bitNum);
}
