#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: an input array
 * @n: an input integer
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int loop_var = 0;

	for (; loop_var < n; loop_var++)
{
	printf("%d", a[loop_var]);
	if (loop_var < n - 1)
	printf(", ");
}
	putchar('\n');
}
