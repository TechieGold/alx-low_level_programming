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
	if (array == NULL || size == 0)
		return (-1);
	size_t left = 0, right = size - 1, mid;

	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
		for (size_t i = left; i <= right; i++)
		{
			if (i == right)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		if (array[mid] > value)
			right = mid - 1;
	}
	return (-1);
}
