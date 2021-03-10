#include "function_pointers.h"

/**
 * array_iterator - goes through each element of the array
 * and passes it to print function.
 *
 * @array: pointer to an array
 * @size: size of an array
 * @action: pointer to a function that prints elements of an array
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int idx;

	if (array == NULL || action == NULL)
		return;

	for (idx = 0; idx < size; idx++)
	{
		action(array[idx]);
	}
}
