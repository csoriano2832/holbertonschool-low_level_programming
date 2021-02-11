#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: determines the size of the triangle
 *
 * Return: null
 */
void print_triangle(int size)
{
	int i, j, k;
	int pointer = size - 1;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < pointer; j++)
			{
				_putchar('.');
			}
			for (k = pointer; k < size; k++)
				_putchar('#');
			_putchar('\n');
			pointer--;
		}
	}
}
