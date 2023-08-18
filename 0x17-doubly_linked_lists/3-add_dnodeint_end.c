#include "lists.h"

/**
  * add_dnodeint_end - Adds a new node at the end of a DLL.
  * @head: Double pointer to the head of the DLL.
  * @n: Value to be stored in the new node.
  *
  * Return: The address of the new element, or NULL if it failed.
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
