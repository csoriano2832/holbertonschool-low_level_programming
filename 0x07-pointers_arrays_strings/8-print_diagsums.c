#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: a pointer to a two dimensional array
 * @size: the quantity of integers to be summed
 */
void print_diagsums(int *a, int size)
{
	int idx, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	idx = 0;
	while (idx < size)
	{
		sum1 += a[((size + 1) * idx)];
		idx++;
	}

	idx = 0;
	while (idx < size)
	{
		sum2 += a[((size - 1) * (idx + 1))];
		idx++;
	}

	printf("%d, %d\n", sum1, sum2);
}
