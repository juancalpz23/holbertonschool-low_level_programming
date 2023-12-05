#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the hash table to delete
 * Return: Void
 **/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr = NULL;
	unsigned long int i = 0;

	if (ht == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			while (ht->array[i])
			{
				curr = ht->array[i];
				free(curr->key);
				free(curr->value);
				ht->array[i] = ht->array[i]->next;
				free(curr);
			}
		}
	}
	free(ht->array);
	free(ht);
}
