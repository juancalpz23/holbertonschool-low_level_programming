#include "hash_tables.h"
/**
 *hash_table_set - Function that adds an element to the hash table
 *@ht: hash table to update
 *@key: is the key
 *@value: value associated with the key
 *Return: i Success, 0 Otherwise
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	int returAdd = 0;

	if (key == NULL || ht == NULL)
		return (0);
	i = key_index((unsigned char *)key, ht->size);
	returAdd = add_node(&(ht)->array[i], (char *)key, (char *)value);
	if (returAdd == 1)
		return (1);
	return (0);
}

/**
 * add_node - function that adds a new node at the beginning of hash_node_t
 * @head: Pointer to head of the hash_node_t
 * @key: the key
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 **/
int add_node(hash_node_t **head, char *key, char *value)
{
	hash_node_t *new_node = (hash_node_t *) malloc(sizeof(hash_node_t));
	hash_node_t *aux = (*head);

	if (new_node == NULL)
		return (0);

	while (aux != NULL)
	{
		if (strcmp(aux->key, key) == 0)
		{
			free(aux->value);
			aux->value = strdup(value);
			free(new_node);
			return (1);
		}
		aux = aux->next;
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = (*head);
	(*head) = new_node;
	return (1);
}
