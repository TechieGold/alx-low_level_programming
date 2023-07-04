#include "lists.h"

/**
  * list_len - Returns the number of element in a linked list.
  * @h: pointer to the first element of a linked list.
  *
  * Return: The number of elements in a linked list.
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
