#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: number to be printed
 *
 * Return: null
 */
void print_number(int n)
{
	int num;

	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
	}
	else
		num = n;
	if ((num / 10) != 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + 48);
}
