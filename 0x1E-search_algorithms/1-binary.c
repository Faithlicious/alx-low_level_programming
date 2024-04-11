#include "search_algos.h"
/**
 * binary_search - searches for a given value in a sorted array of ints using
 * binary search algorithm
 * @array: the array
 * @size: size of the array
 * @value: value to find
 * Return: the values index or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t H, L, i, j, mid;

	if (array == NULL || size == 0)
		return (-1);
	H = size - 1;
	L = 0;

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
