#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to a hash table
 * @ht: the hash table that the element is added to
 * @key: the key that will be used to raise the hashdjb2 code
 * @value: the value that is to be passed to the table
 *
 * Return: return 1 if succeed or 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n, *n1;
	char *_value;
	unsigned long int index;
	if(ht == NULL || key == NULL || value == NULL)
		return 0;

	_value = strdup(value);
	if (_value == NULL)
		return 0;
	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
		return 0;
	n->next = NULL;
	n->value = _value;
	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = n;
		return 1;
	}
	else
	{
		n1 = ht->array[index];
		while(n1->next != NULL)
			n1 = n1->next;
		n1->next = n;
		return 1;
	}
}
		
