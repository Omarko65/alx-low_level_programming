#include "hash_tables.h"

/**
 * key_index - assigns key to array using key mod table size
 * @key: this is the key to the value
 * @size: this is the size of the tabke
 *
 * Return: returns index of the key/value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value = hash_djb2(key);
	return (value % size);
}
