#include "search_algos.h"

/**
 * binary_search - This function searches for a value in a sorted array
 * of integers using the binary search algorithm.
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elemtns in array
 * @value: is the value to search for
 *
 * Return: This function returns the index where value is located
 * If value is not in array or if array is NULL, the function returns -1.
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int L = 0;
	unsigned int R = size - 1;
	unsigned int mid, i;

	if (array == NULL)
		return (-1);

	while (L <= R)
	{
		mid = (unsigned int)((L + R) / 2);

		printf("Searching in array: ");
		for (i = L; i <= R; i++)
		{
			printf("%i", i);
			if (i != R)
				printf(", ");
		}
		printf("\n");

		if (array[mid] < value)
			L = mid + 1;
		else if (array[mid] > value)
			R = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
