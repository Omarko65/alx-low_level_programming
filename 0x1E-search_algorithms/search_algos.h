#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
/*void print_arr(int *array, int left, int right);*/
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t sie, int value);
int binary_look(int *array, size_t low, size_t high, int value);
/*void print_arr(int *array, int left, int right);
*/
int advanced_binary(int *array, size_t size, int value);
#endif
