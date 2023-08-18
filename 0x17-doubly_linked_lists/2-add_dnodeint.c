#include "lists.h"

/**
  * add_dnodeint - Add a new node at the beginning of a DLL.
  * @head: Pointer to a pointer to the head of the DLL.
  * @n: Value to be stored in the new node.
  *
  * Return: The address of the new element, or NULL if it failed.
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
