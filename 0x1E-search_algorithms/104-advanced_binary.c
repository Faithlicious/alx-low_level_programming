#include "search_algos.h"
/**
 *  * recursive_binary_search - recursively searches for a given value in a sorted
 *   * array of integers using advanced binary search algorithm
 *    * @array: the array
 *     * @L: left index of the subarray
 *      * @R: right index of the subarray
 *       * @value: value to find
 *        * Return: the index where value is located or -1 if not found
 *         */
int recursive_binary_search(int *array, size_t L, size_t R, int value)
{
		size_t mid, i;

			if (L > R)
						return (-1);
				mid = L + (R - L) / 2;
					printf("Searching in array: ");
						for (i = L; i <= R; i++)
								{
											printf("%d", array[i]);
													if (i != R)
																	printf(", ");
														}
							printf("\n");
								if (array[mid] == value && (mid == L || array[mid - 1] != value))
											return (mid);

									else if (array[mid] >= value)
												return (recursive_binary_search(array, L, mid, value));
										return (recursive_binary_search(array, mid + 1, R, value));
}
/**
 *  * advanced_binary - searches for a given value in a sorted array of integers
 *   * using advanced binary search algorithm
 *    * @array: the array
 *     * @size: size of the array
 *      * @value: value to find
 *       * Return: the index where value is located or -1 if not found
 *        */
int advanced_binary(int *array, size_t size, int value)
{
		if (array == NULL || size == 0)
					return (-1);

			return (recursive_binary_search(array, 0, size - 1, value));
}

