#include "holberton.h"

/**
  * _calloc - allocate memory for an array of nmemb elements of size bytes each
  * @nmemb: elements of an array
  * @size: size of bytes in memory
  *
  * Return: a pointer to the allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int idx, bytes;

	if (nmemb == 0 || size == 0)
		return (NULL);

	bytes = nmemb * size;

	ptr = malloc(bytes);
	if (ptr == NULL)
		return (NULL);

	for (idx = 0; idx < bytes; idx++)
		ptr[idx] = 0;

	return (ptr);
}
