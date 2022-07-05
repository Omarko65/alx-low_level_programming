#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value with a associated key
 * @ht: table to retrieve value from
 * @key: the key we are looking for
 *
 * Return: the value associated with the element or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *n;

	if (ht == NULL || key == NULL)
		return NULL;

	index = key_index((const unsigned char *)key, ht->size);

	n = ht->array[index];
	while (n != NULL)
	{
		if(strcmp(n->key, key) == 0)
			return n->value;
		n = n->next;
	}
	return NULL;
}
