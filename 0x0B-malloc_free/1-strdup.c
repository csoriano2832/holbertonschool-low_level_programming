#include <stdlib.h>
#include "holberton.h"

/**
  *
  *
  *
  */
char *_strdup(char *str)
{
	int idx, len;
	char *dup;


	if (str == NULL)
		return (NULL);

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		len++;
	}

	dup = malloc(sizeof(char) * len);
	if (dup == NULL)
		return (NULL);
	
	for (idx = 0; str[idx] != '\0'; idx++)
	{
		dup[idx] = str[idx];
	}

	return (dup);
}
