#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

/* Standard Libraries */
#include <stdlib.h>
#include <stdarg.h>

/* Structs */
/**
 * struct types - argument type struct
 *
 * @types: a character tied to a type of argument
 * @func: the function associated
 */
typedef struct types
{
	char types;
	void (*func)(va_list *args);
} types_t;

/* Prototypes */
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
