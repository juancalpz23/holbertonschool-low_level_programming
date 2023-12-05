#include "hash_tables.h"
/**
 * hash_table_get - function to get the value of a key
 * @ht: hash table to look into
 * @key: key looking for
 * Return: key or NULL
 **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];

	for (; tmp != NULL; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
	}
	return (NULL);
}
