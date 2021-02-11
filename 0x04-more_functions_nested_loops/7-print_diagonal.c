#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: determines the size of the line
 *
 * Return: null
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (i == j)
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
