#include "lists.h"

/**
  * add_nodeint - Adds a new node at the beginning of a linked list.
  * @head: Double pointer to the the head of the list.
  * @n: Data value.
  *
  * Return: Address of the new element or NULL if it fails.
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
