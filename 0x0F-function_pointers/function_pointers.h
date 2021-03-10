#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

#include <stdio.h>
#include <stdlib.h>

/* Prototypes */
int _putchar(char c);
void print_name(char *name, void (*f)(char *c));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
