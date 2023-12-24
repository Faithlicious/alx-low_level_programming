#include "hash_tables.h"

/**
 *hash_table_print - a function  to print contents of a hash table
 *@ht: the hash table to print
 *Return: nothing
 */


void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp = NULL;
	int check = 0;

	i = 0;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			tmp = ht->array[i];
			if (tmp)
				check += 1;

			while (tmp)
			{
				if (check == 1)
					printf("'%s': '%s'", tmp->key, tmp->value);
				else
					printf(", '%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
			}
		}
		printf("}\n");
	}
}
