#include "holberton.h"

/**
  * _realloc - reallocates a memory block using malloc and free
  * @ptr: pointer to an array
  * @old_size: size in bytes of old array
  * @new_size: size in bytes of new array
  *
  * Return: pointer to a new array
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);

		return (new_ptr);
	}

	new_ptr = malloc(new_size);
	free(ptr);
	return (new_ptr);
}
