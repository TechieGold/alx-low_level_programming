#include "lists.h"

/**
  * print_list - prints all elements of a list and return the number of nodes.
  * @h: pointer to the first element in the linked list.
  *
  * Return: Number of nodes in the linked list.
  */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%lu] %s\n", strlen(h->str),  h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		count++;
	}
	return (count);
}

