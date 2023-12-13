#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where the value is located, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size);
	int left = 0, right = 0, i;

	if (array == NULL)
		return (-1);

	while (right < (int)size && array[right] < value)
	{
		printf("Value checked array[%d] = [%d]\n", right, array[right]);
		left = right;
		right += jump;
	}
	printf("Value found between indexes [%d] and [%d]\n", left, right);
	for (i = left; i < (int)size && i <= right; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
