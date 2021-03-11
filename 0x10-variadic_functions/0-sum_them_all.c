#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @num: a constant positive number
 *
 * Return: the sum of n numbers
 */
int sum_them_all(const unsigned int num, ...)
{
	va_list args;
	unsigned int idx;
	int res;

	if (num == 0)
		return (0);

	va_start(args, num);

	res = 0;
	for (idx = 0; idx < num; idx++)
		res += va_arg(args, int);

	va_end(args);
	return (res);
}
