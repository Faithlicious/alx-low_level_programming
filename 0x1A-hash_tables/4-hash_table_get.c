#include "hash_tables.h"

/**
 *hash_table_get - fetches a value from a hash table
 *@ht: the hash table
 *@key: the key holding the value
 *Return: the the keys value on success else NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (!key || !(*key) || !ht)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[index];

	while (tmp && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;

	if (!tmp)
		return (NULL);

	return (tmp->value);
}
