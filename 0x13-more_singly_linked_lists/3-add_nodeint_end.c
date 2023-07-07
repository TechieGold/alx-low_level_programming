#include "lists.h"

/**
  * add_nodeint_end - Adds a new node at the end of a linked list.
  * @head: Double pointer to the  head node.
  * @n: Data value.
  *
  * Return: The address of the new element or NULL if it fails.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = NULL;

	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = newNode;

	return (newNode);
}
