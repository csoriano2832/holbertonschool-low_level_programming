#include "holberton.h"

/**
  * set_string - sets the value of a pointer to a char
  * @s: pointer to a char pointer
  * @to: pointer to a string
  */
void set_string(char **s, char *to)
{
	*s = to;
}
