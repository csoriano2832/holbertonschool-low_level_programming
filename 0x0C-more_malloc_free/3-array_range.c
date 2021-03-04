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
	int idx, diff;

	if (min > max)
		return (NULL);

	diff = max - min;

	new_arr = malloc(sizeof(int) * (diff + 1));
	if (new_arr == NULL)
		return (NULL);

	for (idx = 0; min <= max; idx++)
	{
		new_arr[idx] = min;
		min++;
	}

	return (new_arr);
}
