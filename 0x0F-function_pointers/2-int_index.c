#include "function_pointers.h"

/**
  * int_index - searches for an integer
  * @array: string of numbers of different values
  * @size: number of elements in the array
  * @cmp: pointer to a compare function
  *
  * Return: the index of the first element for which the cmp function
  * does not return 0.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int idx, flag;

	if (array == NULL || cmp == NULL)
		return (0);

	if (size <= 0)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		flag = cmp(array[idx]);
		if (flag != 0)
			return (idx);
	}

	return (-1);
}
