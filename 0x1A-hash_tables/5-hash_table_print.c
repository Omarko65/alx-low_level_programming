#include "hash_tables.h"

/**
 * hash_table_print - a function that prints hash table
 * @ht: hash table to be printed
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	unsigned char comma = 0;

	if(ht == NULL)
		return;

	printf("{");
	for(i = 0; i < ht->size; i++)
	{
		if(ht->array[i] != NULL)
		{
			if (comma == 1)
				printf(", ");

			node = ht->array[i];
			while(node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma = 1;
		}
	}
	printf("}\n");
}
