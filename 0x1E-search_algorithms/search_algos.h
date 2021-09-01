#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* STANDARD LIBRARIES */
#include <stdio.h>
#include <math.h>

/* MACROS */
#define MIN(a, b) ((a) < (b) ? (a) : (b))

/* PROTOTYPES */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/* ADVANCED */
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
/* modified binary search function for exponential search */
int binary_search_2(int *array, int value, int left, int right);
int advanced_binary(int *array, size_t size, int value);

#endif
