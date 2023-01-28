#include "lists.h"

/**
  * list_len - return the number of elements in a linked list.
  * @h: pointer to the head of the list.
  *
  * This function takes a pointer to the head of a linked list of type
  * 'list_t' as an argument.
  *
  * Return: Number of elements.
  */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	 size_t  count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
