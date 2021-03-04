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
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
