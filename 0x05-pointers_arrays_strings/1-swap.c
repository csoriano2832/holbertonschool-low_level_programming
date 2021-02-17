#include "holberton.h"

/**
  * swap_int - swaps the value of two integers
  * @a: value of first integer
  * @b: value of second integer
  *
  * Return: null
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

