#include "search_algos.h"
/**
 * bin_search - searches for a given value in a sorted array of ints using
 * binary search algorithm
 * @array: the array
 * @H: High
 * @L: Low
 * @size: size of the array
 * @value: value to find
 * Return: the values index or -1
 */
int bin_search(int *array, size_t H, size_t L, size_t size, int value)
{
	size_t i, j, mid;

	if (array == NULL || size == 0)
		return (-1);

	while (L <= H)
	{
		i = L;
		j = H;
		printf("Searching in array: ");
		for (; i <= j; i++)
		{
			printf("%d", array[i]);
			if (i != j)
				printf(", ");
		}
		printf("\n");
		mid = (L + H) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			H = mid - 1;
		else
			L = mid + 1;
	}
	return (-1);
}

/**
 * min - returns min between a range
 * @H: High
 * @L: Low
 * Return: the values index or -1
 */
size_t min(size_t H, size_t L)
{
	return ((H < L) ? H : L);
}

/**
 * exponential_search - searches for a given value in a sorted array of ints
 * using exponential search algorithm
 * @array: the array
 * @size: size of the array
 * @value: value to find
 * Return: the values index or -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL || size == 0)
		return (-1);
	if (array[i] == value)
		return (i);
	i = 1;

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", (i / 2),
	       min(i, (size - 1)));
	return (bin_search(array, min(i, size - 1), i / 2, size, value));
}
