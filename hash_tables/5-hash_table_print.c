#include "hash_tables.h"
/**
 * hash_table_print - function to print hash table
 * @ht: hash table to be printed
 * Return: void
 **/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned long int i = 0, n = 0;

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	for (i = n; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			ptr = ht->array[i];
			while (ptr)
			{
				printf("%s'%s': '%s'", n == 0 ? "" : ", ",
				       ptr->key, ptr->value), n++;
				ptr = ptr->next;
			}
		}
	}
	printf("}\n");
}
