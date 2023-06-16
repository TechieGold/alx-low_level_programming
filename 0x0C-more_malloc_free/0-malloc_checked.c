#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: total size of bytes to allocate.
 *
 * Return: void pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(b));

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
