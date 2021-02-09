#include "holberton.h"

/**
 * print_last_digit - print last digit of number
 * @n: number to extract last digit
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
