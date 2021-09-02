#include "search_algos.h"

/**
 * jump_search - this function searches for a value in a sorted array
 * of integers using the jump search algorithm.
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: this functions returns the first index where value is located
 * If value is not in array or if array is NULL, this function returns -1.
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int blockSize = sqrt(size);
	unsigned int start = 0;
	unsigned int end = blockSize;
	unsigned int i;

	if (array == NULL)
		return (-1);

	printf("Value checked array[%i] = [%i]\n", start, array[start]);
	while (array[end] < value && end < size)
	{
		start = end;
		end += blockSize;
		printf("Value checked array[%i] = [%i]\n", start, array[start]);
	}

	printf("Value found between indexes [%i] and [%i]\n", start, end);
	for (i = start; i <= end && i < size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
