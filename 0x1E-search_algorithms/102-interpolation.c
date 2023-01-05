#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - a function that searches for a value
 * @array: the array being searched
 * @size: lenght of array being searched
 * @value: the value we're looking for
 *
 * Return: index of value or -1 if failed
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		mid = low + ((value - array[low]) * (high - low))
		      / (array[high] - array[low]);


		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	printf("Value checked array[%ld] is out of range\n", mid);
	return (-1);
}
