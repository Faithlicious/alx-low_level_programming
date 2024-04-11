#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array to search
 * @size: size of the array
 * @value: value to search for
 * Return: value index or if array is NULL, -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, High, jump;

	if (array == NULL || size == 0)
		return (-1);

	jump = sqrt(size);
	for (i = High = 0; High < size && array[High] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", High, array[High]);
		i = High;
		High += jump;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, High);

	High = High < size - 1 ? High : size - 1;
	for (; i < High && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
