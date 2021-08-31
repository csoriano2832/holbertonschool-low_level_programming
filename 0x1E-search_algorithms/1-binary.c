#include "search_algos.h"

/**
 * print_binary_search - This function prints an array within set boundaries.
 *
 * @array: is a pointer to the first element in the array
 * @L: is the leftmost set boundary
 * @R: is the rightmost set boundary
 *
 */
void print_binary_search(int *array, int L, int R)
{
	if (L <= R)
	{
		printf("Searching in array: ");
		for (; L <= R; L++)
		{
			printf("%i", array[L]);
			if (L != R)
				printf(", ");
		}
		printf("\n");
	}
}

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
	int L = 0;
	int R = size - 1;
	unsigned int mid;

	if (array == NULL)
		return (-1);

	print_binary_search(array, L, R);
	while (L <= R)
	{
		mid = (L + R) / 2;

		if (array[mid] < value)
		{
			L = mid + 1;
			print_binary_search(array, L, R);
		}
		else if (array[mid] > value)
		{
			R = mid - 1;
			print_binary_search(array, L, R);
		}
		else
		{
			return (mid);
		}
	}

	return (-1);
}
