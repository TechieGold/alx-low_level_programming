#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table and its elements.
 * @ht: The hash table to be deleted.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	hash_node_t *current;

	if (ht == NULL)
	{
		return;
	}
	for (unsigned long int i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temp = current;
			current = current->next;

			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
