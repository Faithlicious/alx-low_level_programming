#include "main.h"
/**
 * flip_bits - returns number of bits needed to flip to get from one number
 * @n: first number
 * @m: second number
 *
 * Return: number of bits flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
