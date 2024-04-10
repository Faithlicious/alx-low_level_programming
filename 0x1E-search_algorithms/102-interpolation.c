#include "search_algos.h"
/**
 *  * interpolation_search - Use interpolation search to search a value
 *   * @array: the array
 *    * @size: size of array
 *     * @value: value to search
 *      * Return: index of the value or -1
 *       */
int interpolation_search(int *array, size_t size, int value)
{
		size_t pos, low, high;

			if (array == NULL || size == 0)
						return (-1);
				low = 0;
					high = size - 1;
						for (low = 0, high = size - 1; high >= 1;)
								{
											pos = low + (((double)(high - low) / (array[high] -
																		     array[low])) * (value - array[low]));
													if (pos < size)
																	printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
															else
																		{
																						printf("Value checked array[%ld] is out of range\n", pos);
																									return (-1);
																											}

																	if (array[pos] == value)
																					return (pos);
																			else if (array[pos] < value)
																							low = pos + 1;
																					else
																									high = pos - 1;
																						}
							return (-1);
}
