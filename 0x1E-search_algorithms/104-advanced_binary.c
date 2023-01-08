#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int binarySearch(int *array, size_t start, size_t end, int value);
void print_arr(int *array, size_t left, size_t right);
/**
 *  advanced_binary - a function that search an array for a value
 *  @array: the array that is to be searched
 *  @size: the length of the array
 *  @value: the value in question
 *
 *  Return: return index of value or -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (binarySearch(array, 0, size - 1, value));
}

/**
 * binarySearch - a function that searches for missing value
 * @start: the first element of the array
 * @end: the end of the array
 * @value: the value being looked for
 *
 * Return: returns -1 or index of found value
 */

int binarySearch(int *array, size_t start, size_t end, int value)
{
	size_t m = start + (end - start) / 2;

	if (!array)
		return (-1);

	if (start > end)
		return (-1);

	print_arr(array, start, end);
	if (value == array[m])
	{
		if (m > start && array[m - 1] == value)
			return (binarySearch(array, start, m - 1, value));
		else
			return ((int)m);
	}

	else if (array[m] < value)
		return (binarySearch(array, m + 1, end, value));

	else
		return (binarySearch(array, m, end - 1, value));
	return (-1);
}


/**
 * print_arr - a function that prints an array
 * @array: the array to to print
 * @left: the leftmost side of the array
 * @right: the rightmost side of the array
 *
 * Return: NULL
 */

void print_arr(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array:");
	for (i = left; i <= right; i++)
	{
		printf(" %d", array[i]);
		if (i != right)
			printf(",");
	}
	printf("\n");
}
