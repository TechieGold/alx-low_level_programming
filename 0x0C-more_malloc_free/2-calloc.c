#include "main.h"

/**
 * _calloc - Allocates memory for an array.
 * @nmemb: Number of element.
 * @size: Size of each element in bytes.
 *
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;
	unsigned int i = 0;
	char *byte_access = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	byte_access = (char *)ptr;

	for (i = 0; i < nmemb * size; i++)
		byte_access[i] = 0;

	return (ptr);
}
