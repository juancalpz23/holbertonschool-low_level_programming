#include "hash_tables.h"
/**
 * key_index - return index of a key
 * @key: key to get index
 * @size: size of the array of hash table
 * Return: index from function
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
