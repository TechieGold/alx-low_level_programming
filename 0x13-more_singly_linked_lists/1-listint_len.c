#include "lists.h"

/**
  * listint_len - Returns the number of elements in a
  * linked list data structure.
  * @h: pointer to the first node in the list.
  *
  * Return:The Number of elements.
  */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
