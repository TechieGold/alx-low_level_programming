include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table you want to add or update the key/value to.
 * @key: The key. The key is unique in the HashTable
 * and cannot be an empty string.
 * @value: The value associated with the key. Value must be duplicated.
 * It can be an empty string.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 * In case of collision, adds the new node at the beginning of the list.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	unsigned long int index = 0;
	hash_node_t *new_node = NULL;

	if (ht == NULL || key == NULL || key[0] == '\0')
	{
		return (0);
	}
	index = hash_djb2((unsigned char *)key) % ht->size;
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = (value != NULL) ? strdup(value) : NULL;
	if (value != NULL && new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
