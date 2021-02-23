#include "holberton.h"

/**
 * print_chessboard - prints a chessboard
 * @a: pointer to a char
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (col = 0; col < 8; col++)
	{
		for (row = 0; row < 8; row++)
		{
			_putchar(a[col][row]);
		}
		_putchar('\n');
	}
}
