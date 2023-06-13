#include "main.h"

/**
 * create_array - creates an array and initializes it.
 * @size: Size of array.
 * @c: charater to fill with.
 *
 * Return: pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
