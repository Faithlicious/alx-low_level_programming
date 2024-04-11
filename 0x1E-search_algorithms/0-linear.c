#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - seacher for a alue in an array of integers
 * @array: arrya
 * @size:size of th e array
 * @value: the value to search for
 * Return: -1 if not found or array is empty or index when no is found
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
			return (i);
	}
	return (-1);
}
