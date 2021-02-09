#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: Always 0.
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

void times_table(void)
{
	int column;

	for (column = 0; column <= 9; column++)
	{
		print_row(column);
		_putchar('\n');
	}
}
