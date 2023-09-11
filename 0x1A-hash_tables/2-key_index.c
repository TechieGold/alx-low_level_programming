#include "hash_tables.h"

/**
 * key_index - calculates the index of a key in the hash table.
 * @key: the key string.
 * @size: the size of the hash table array.
 *
 * Return: the index at which the key should be stored.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash_val;

    if (key == NULL || size == 0)
        return (0);
    hash_val = hash_djb2(key);

    return (hash_val % size);

}