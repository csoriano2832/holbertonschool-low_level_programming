#include "holberton.h"

/**
  * factorial - returns the factorial of a given number
  * @n: a number
  * Return: if valid input, the factorial number
  * -1 if n is lower than 0.
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n = n * factorial(n - 1));
}
