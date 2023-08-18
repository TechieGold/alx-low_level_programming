#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to a pointer to the head of the doubly linked list.
 * @idx: Index where the new node should be added (starting from 0).
 * @n: Value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
	*h = new_node;
	return (new_node);
	}

	while (current != NULL)
	{
		if (count == idx)
		{
			new_node->next = current;
			new_node->prev = current->prev;
			if (current->prev != NULL)
				current->prev->next = new_node;
			current->prev = new_node;
			return (new_node);
		}
		current = current->next;
		count++;
	}

	free(new_node);
	return (NULL);
}

