#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @num: number of integers passed to the function
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int num, ...)
{
	va_list args;
	unsigned int idx;

	va_start(args, num);

	for (idx = 0; idx < num; idx++)
	{
		printf("%d", va_arg(args, int));
		
		if (separator != NULL && idx < num - 1)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(args);
}
