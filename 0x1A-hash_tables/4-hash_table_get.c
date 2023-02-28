#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
/**
 * hash_table_get - retrieves the value associated with a key
 * @ht: hash table
 * @key: key to search for
 * Return: value associated with the key,
 * NULL, if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (key == NULL || ht == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
