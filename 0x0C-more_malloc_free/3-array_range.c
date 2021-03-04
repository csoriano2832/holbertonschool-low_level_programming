#include "holberton.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *new_arr;
	int idx;

	if (min > max)
		return (NULL);

	new_arr = malloc(sizeof(int) * (max + 1));

	for (idx = 0; min <= max; idx++)
	{
		new_arr[idx] = min;
		min++;
	}

	return (new_arr);
}
