#include "hash_tables.h"

/**
 *key_index - generates a key index for the hash table
 *@key: the key
 *@size: the size of the hash table
 *Return: the key index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
