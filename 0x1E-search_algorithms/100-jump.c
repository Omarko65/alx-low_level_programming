#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>
/**
 * jump_search - a func that searches for a value using jump search algo
 * @array: the array being searched
 * @size: the number of elements in array
 * @value: the value being searched for
 *
 * Return: index where value is located
 */

int jump_search(int *array,  size_t size, int value)
{
	size_t i, jump, curr, forw;
	int result = -1;

	if (!array)
		return (result);

	jump = (size_t)sqrt(size);
	curr = 0;

	while (curr < size)
	{
		forw = curr + jump;
		printf("Value checked array[%ld] = [%d]\n", curr, array[curr]);
		if (forw >= size - 1 || array[forw] > value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
				curr, forw);
			i = curr;
			while (i <= forw && i < size)
			{
				printf("Value checked array[%ld] = [%d]\n",
					i, array[i]);
				if (array[i] == value)
					return ((int)i);
				i++;
			}
			break;
		}
		curr = forw;
	}
	return (result);
}
