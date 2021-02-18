#include "holberton.h"

/**
  * reverse_array - reverses an array
  * @a: the array that will be reversed
  * @n: the number of elements in the array
  */
void reverse_array(int *a, int n)
{
	int idx, len, tmp;

	len = 0;
	for (idx = 0; idx != n; idx++)
		len++;

	tmp = 0;
	for (idx = 0; idx < len; idx++)
	{
		tmp = a[idx];
		a[idx] = a[(len - 1)];
		a[(len - 1)] = tmp;
		len--;
	}
}
