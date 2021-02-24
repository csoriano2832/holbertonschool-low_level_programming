#include "holberton.h"

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
