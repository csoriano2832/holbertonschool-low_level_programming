#include "holberton.h"

/**
 * more_numbers - prints the numbers from 0 to 14 ten times
 *
 * Return: null
 */
void more_numbers(void)
{
	int i, count;

	for (count = 0; count <= 10; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
