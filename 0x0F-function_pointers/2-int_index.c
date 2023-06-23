#include "function_pointers.h"

/**
 * int_index - Searches for an index.
 * @array: pointer to the array of integer to search through.
 * @size: Number of elements in the array.
 * @cmp: function pointer that will be ised to compare values.
 *
 * Return: -1 if size is negative, otherwise, return the index of the element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == 0 || cmp == 0 || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);

	return (-1);

}
