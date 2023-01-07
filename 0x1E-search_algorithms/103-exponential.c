#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

void print_arr(int *array, size_t left, size_t right);
/**
 * exponential_search - a function that finds value in a sorted array
 * @array: the array being searched
 * @size: the length of the array
 * @value: the value that's searched for
 *
 * Return: -1 if failed or index of value
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i, start_block, end_block;
	
	if (!array)
		return(-1);
	
	if (array[0] == value)
		return (0);
	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}


	start_block = i / 2;
	if (i > size - 1)
		end_block = size - 1;
	else
		end_block = i;

	printf("Value found between indexes [%ld] and [%ld]\n", start_block, end_block);
	return (binary_look(array, start_block, end_block, value));
}

/**
 * binary_look - a function that finds a value in a n array
 * @array: the array in question
 * @low: the start of the array
 * @high: the end of the array
 * @value: the value being searched for
 *
 * Return -1 if failed or index of value
 */

int binary_look(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (array == NULL)
		return(-1);

	while (low <= high)
	{
		print_arr(array, low, high);
		mid = (low + high) / 2;

		if (value == array[mid])
			return ((int)mid);
		else if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
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
	for( i = left; i <= right; i++)
	{
		printf(" %d", array[i]);
		if (i != right)
			printf(",");
	}
	printf("\n");
}
