#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - a function that searches for a value
 * @array: pointer to the first element of array
 * @size: number of elements in array
 * @value: the value being searched for
 *
 * Return: -1 if failed else 0
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int)(i));
	}
	return (-1);
}
