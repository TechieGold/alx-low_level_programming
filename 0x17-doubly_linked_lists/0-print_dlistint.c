#include "lists.h"

/**
  * print_dlistint -  Displays the elements of DLL
  * and returns the number of nodes.
  * @h: Pointer to the head of the DLL.
  *
  * Return: The number of nodes in the DLL.
  */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t nodeCount = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		nodeCount++;
	}

	return (nodeCount);
}
