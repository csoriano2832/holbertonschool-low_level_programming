#include "search_algos.h"

/**
 * interpolation_search - this function searches for a value in a sorted array
 * of integers using the interpolation search algorithm.
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located
 * If value is not in array or array is NULL, returns -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	size_t pos;
	size_t index;

	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));

		if (pos > size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%lu] = [%i]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			index = pos;
			break;
		}
		else
		{
			if (array[pos] < value)
				low = pos + 1;
			else
				high = pos - 1;
		}
	}
	return (index);
}
