#include "holberton.h"

/**
 * print_times_table - prints various times tables
 * @width: size of the table
 *
 * Return: null
 */
void print_times_table(int width)
{
	int row, column, result;

	if (width > 0 && width < 15)
	{
		for (column = 0; column <= width; column++)
		{
			for (row = 0; row <= width; row++)
			{
				result = row * column;
				if (result > 99)
				{
					_putchar(' ');
					_putchar((result / 100) + '0');
					_putchar(((result % 100) / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else if (result > 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				}
				if (row != width)
				{
					_putchar(',');

				}
			}
			_putchar('\n');
		}
	}
}
