#include "hash_tables.h"

/**
* hash_table_get - retreives the value associated with a key.
* @ht: the hash table.
* @key: the key.
*
* Return: returns the values associated with the element
* or NULL if key could not be found.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *current = NULL;

	if (ht == NULL || key == NULL || key[0] == '\0')
	{
		return (NULL);
	}

	index = hash_djb2((unsigned char *)key) % ht->size;
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}

	return (NULL);
}
