#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: number of the array
 *
 * Return: returns pointer to a new hash table or NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	int i;
	hash_table_t *hashTable[size];
	
	for(i = 0; i < size; i++)
		hashTable[i] = NULL;
	return (hashTable);
}
