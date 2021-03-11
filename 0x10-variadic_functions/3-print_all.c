#include <stdio.h>
#include "variadic_functions.h"

void type_string(va_list *arg);
void type_float(va_list *arg);
void type_int(va_list *arg);
void type_char(va_list *arg);

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int idx, jdx;
	char *separator = ", ";
	types_t arg_type[] = {
		{'c', type_char},
		{'i', type_int},
		{'f', type_float},
		{'s', type_string},
		{'\0', NULL}
	};

	va_start(args, format);

	idx = 0;
	while (format[idx] != '\0')
	{
		jdx = 0;
		while (arg_type[jdx].types != '\0')
		{
			if (format[idx] == arg_type[jdx].types)
			{
				arg_type[jdx].func(&args);
				if (format[idx + 1] != '\0')
					printf("%s", separator);
			}
			jdx++;
		}
		idx++;
	}
	va_end(args);
	putchar('\n');
}

/**
 * type_char - prints a char
 * @args: the argument passed
 *
 * Return: nothing
 */
void type_char(va_list *args)
{
	char letter;

	letter = va_arg(*args, int);
	printf("%c", letter);
}

/**
 * type_int - prints an int
 * @args: the argument passed
 *
 * Return: nothing
 */
void type_int(va_list *args)
{
	int number;

	number = va_arg(*args, int);
	printf("%i", number);
}

/**
 * type_float - prints a float
 * @args: the argument passed
 *
 * Return: nothing
 */
void type_float(va_list *args)
{
	float decimal;

	decimal = va_arg(*args, double);
	printf("%f", decimal);
}

/**
 * type_string - prints a string
 * @args: the argument passed
 *
 * Return: nothing
 */
void type_string(va_list *args)
{
	char *string;

	string = va_arg(*args, char *);
	if (string == NULL)
		printf("(nil)");
	else
		printf("%s", string);
}
