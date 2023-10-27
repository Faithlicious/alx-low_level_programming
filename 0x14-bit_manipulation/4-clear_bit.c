#include "main.h"
/**
 * clear_bit - sets value of a given bit to 0
 * @n: pointer to number to change
 * @index: index of the bit to set
 *
 * Return: 1 if it worked, or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
