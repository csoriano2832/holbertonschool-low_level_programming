#include "holberton.h"

/**
 * print_row - prints the rows of the 9 times table
 * @mult_row: number which idx will be multiplied by
 *
 * Return: null
 */
void print_row(int mult_row)
{
	int idx, check;

	for (idx = 0; idx <= 9; idx++)
	{
		check = idx * mult_row;
		if (check > 9)
		{
			_putchar(' ');
			_putchar((check / 10) + '0');
			_putchar((check % 10) + '0');
		}
		else
		{
			if (idx != 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			_putchar(check + '0');
		}
		if (idx != 9)
		{
			_putchar(',');

		}
	}
}

/**
 * times_table - prints the columns of the 9 times table
 *
 * Return: null
 */
void times_table(void)
{
	int column;

	for (column = 0; column <= 9; column++)
	{
		print_row(column);
		_putchar('\n');
	}
}
