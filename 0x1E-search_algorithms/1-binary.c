#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - a function that search for value via binary search
 * @array: the array being searched
 * @size: the length of the array
 * @value: the value that is to be found in the arrray
 *
 * Return: the index where the value was found or -1 if error
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = (int) size - 1;
	int mid;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		print_arr(array, low, high);
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
			low = mid + 1;

		else
			high = mid - 1;
	}
	return (-1);
}

/**
 * print_arr - a function that prints an array
 * @array: the array to be printed
 * @left: the leftmost side of the array
 * @right: the rightmost side of the array
 *
 * Return: nothing
 */

void print_arr(int *array, int left, int right)
{
	int i = left;

	printf("Searching in array:");
	while (i <= right)
	{
		printf(" %d", array[i]);
		if (i < right)
			printf(",");
		i++;
	}
	printf("\n");
}
