#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in array.
 * @value: The value to search for.
 *
 * Return: The index where value is located.
 *	or -1 if value is absent or array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, mid, left = 0, right = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: %d", array[left]);
		for (i = left + 1; i <= right; i++)
			printf(", %d", array[i]);
		printf("\n");

		mid = (left + right) / 2;

		if (value == array[mid])
			return (mid);
		else if (value > array[mid])
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
