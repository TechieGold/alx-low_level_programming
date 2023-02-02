#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - adds a new node at the beginning of a list.
  * @head: double pointer to the first node.
  * @n: value to be stored in the new node
  *
  * Return: the address of the new element or NULL if it failed.
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	else
	{
	newNode->n = n;
	newNode->next = (*head);
	(*head) = newNode;
	}
	return (newNode);
}
