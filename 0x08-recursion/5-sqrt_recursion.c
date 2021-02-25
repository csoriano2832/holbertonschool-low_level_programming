#include "holberton.h"

/**
 * check_sqrt - compares two numbers
 * @n: a number
 * @num: int that multiplies by itself
 * Return: the square root
 */
int check_sqrt(int n, int num)
{
	if (num * num == n)
		return (num);

	if (num * num > n)
		return (-1);

	return (check_sqrt(n, num + 1));
}

/**
 * _sqrt_recursion - returns the number after square root has been found
 * @n: a number
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	int num = 0;

	if (num == 1)
		return (1);

	if (num < 0)
		return (-1);

	return (check_sqrt(n, num));
}
