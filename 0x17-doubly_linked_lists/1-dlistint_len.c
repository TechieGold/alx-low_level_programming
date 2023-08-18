#include "lists.h"

/**
  * dlistint_len - Returns the number of elements in a DLL.
  * @h: Pointer to the head of the DLL.
  *
  * Return: Number of elements in a DLL.
  */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t nodeCount = 0;

	while (current != NULL)
	{
		current = current->next;
		nodeCount++;
	}
	return (nodeCount);
}
