#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @num: number of strings passed to the function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int num, ...)
{
	va_list args;
	unsigned int idx;
	char *str_check;

	if (num == 0)
		return;

	va_start(args, num);

	if (num > 0)
	{
		for (idx = 0; idx < num; idx++)
		{
			str_check = va_arg(args, char *);

			if (str_check != NULL)
				printf("%s", str_check);
			else
				printf("(nil)");

			if (separator != NULL && idx < num - 1)
				printf("%s", separator);
		}
	}
	va_end(args);
	putchar('\n');
}
