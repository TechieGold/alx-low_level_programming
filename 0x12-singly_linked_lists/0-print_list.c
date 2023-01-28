#include "list.h"
#include <stdio.h>
/**
  * print_list - prints the elements of a list.
  * @h: pointer to the head of the list.
  *
  * Return: The number of nodes printed.
  */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("[%u] %s\n", current->len, current->str);
		}
		current = current->next;
		count++;

	}
	return (count);
}
