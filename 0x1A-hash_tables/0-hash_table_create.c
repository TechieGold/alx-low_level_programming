#include "hash_tables.h"

/*
 * hash_table_create - Creates a hash table.
 * @size: Size of the array.
 *
 * Return: A pointer to the newly created hash table,
 * or NULL if an error occured.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_table;
    unsigned long int idx;

    if (size == 0)
        return (NULL);

    new_table = malloc(sizeof(hash_table_t));
    if (new_table == NULL)
        return (NULL);

    new_table->array = malloc(sizeof(hash_node_t) * size);
    if (new_table->array == NULL)
    {
        free(new_table);
        return (NULL);
    }

    for (idx = 0; idx < size; idx++)
    new_table->array[idx] = NULL;

    new_table->size = size;
    return (new_table);
}