#include "lists.h"

/**
  * get_dnodeint_at_index - Returns the nth node of a DLL.
  * @head: Doubly pointer of the DLL.
  * @index: Index of the node to retrieve, starting from 0.
  *
  * Return: Pointer to the nth node, or NULL if the node does not exist.
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}

	return (NULL);
}
