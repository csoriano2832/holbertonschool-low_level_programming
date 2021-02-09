#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: number to compute
 *
 * Return: Integer
 */
int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
