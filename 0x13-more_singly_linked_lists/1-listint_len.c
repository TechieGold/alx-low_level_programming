#include "lists.h"

/**
  * listint_len - a function that returns number of elements in a linked list.
  * @h: pointer to the first element.
  *
  * Return: number of elements.
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
