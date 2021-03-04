#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size in bytes of the memory needed
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
