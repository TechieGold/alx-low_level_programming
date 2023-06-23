#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of the array.
 * @array: pointer to the array of integers.
 * @size: size of the array.
 * @action: function pointer to the function
 * that will be executed on each element of the array.
 *
 * Return: Nothkng.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action  == NULL)
		return;
	if (size == '\0')
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
