#include "hash_tables.h"

/**
 *hash_table_delete - deletes a hash table
 *@ht: the hash table to delete
 *Return: nothing
 */


void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp = NULL, *next = NULL;

	i = 0;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			tmp = ht->array[i];

			while (tmp)
			{
				free(tmp->key);
				free(tmp->value);
				next = tmp->next;
				free(tmp);
				tmp = next;
			}
		}

		free(ht->array);
		free(ht);
	}
}
