#include "hash_tables.h"
/**
 *hash_table_set - adds a node to the hash table
 *@ht: the hash table
 *@key: the key
 *@value: the value
 *Return: 1 on success else 0
 */



int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *tmp;


	if (!ht || !key || !(*key) || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[index];

	while (tmp && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;

	if (tmp)
	{
		free(tmp->value);
		tmp->value = strdup(value);
		return (1);
	}

	new = malloc(sizeof(hash_node_t));

	if (!new)
	{
		free(new);
		return (0);
	}

	new->key = strdup(key);
	new->value = strdup(value);

	new->next = ht->array[index];

	ht->array[index] = new;

	return (1);
}
