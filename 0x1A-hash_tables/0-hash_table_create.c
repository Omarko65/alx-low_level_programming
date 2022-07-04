#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: number of the array
 *
 * Return: returns pointer to a new hash table or NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable;
	unsigned long int i;
	
	hashTable = malloc(sizeof(hash_table_t));
	
	if (hashTable == NULL)
		return NULL;
	
	hashTable->size = size;
	hashTable->array = malloc(sizeof(hash_node_t *) * size);
	
	if (hashTable->array == NULL)
		return NULL;
	
	for (i = 0; i < size; i++)
		hashTable->array[i] = NULL;
	
	return hashTable;
}
