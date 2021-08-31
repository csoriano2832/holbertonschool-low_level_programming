#include "search_algos.h"

/**
 * linear_search - This function searches for a value in an array
 * using the linear search algorithm.
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: This function must return the first index where value is located
 * If value is not in array or if array is NULL, the function returns -1.
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
