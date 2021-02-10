#include "holberton.h"

void three_digit_format(int);
void two_digit_format(int);
void one_digit_format(int, int);

/**
 * print_times_table - prints times tables
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
					three_digit_format(result);
				}
				else if (result > 9)
				{
					two_digit_format(result);
				}
				else
				{
					one_digit_format(row, result);
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

/**
 * three_digit_format - prints three digit number separated by one space
 * @result: the number to be printed
 *
 * Return: null
 */
void three_digit_format(int result)
{
	_putchar(' ');
	_putchar((result / 100) + '0');
	_putchar(((result % 100) / 10) + '0');
	_putchar((result % 10) + '0');
}

/**
 * two_digit_format - prints two digit number separated by two spaces
 * @result: the number to be printed
 *
 * Return: null
 */
void two_digit_format(int result)
{
	_putchar(' ');
	_putchar(' ');
	_putchar((result / 10) + '0');
	_putchar((result % 10) + '0');
}

/**
 * one_digit_format - prints one digit number separated by three spaces
 * no space is printed if it's the first number on the table.
 * @row: number of the row
 * @result: the number to be printed
 *
 * Return: null
 */
void one_digit_format(int row, int result)
{
	if (row != 0)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
	}
	_putchar(result + '0');
}
