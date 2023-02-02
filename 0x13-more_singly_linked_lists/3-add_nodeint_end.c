#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a list.
  * @head: double pointer to the first element of a list.
  * @n: integer to be inserted at the end of the node.
  *
  * Return: address of the new element or NULL id it failed.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (NULL);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newNode;

	return (newNode);
}
