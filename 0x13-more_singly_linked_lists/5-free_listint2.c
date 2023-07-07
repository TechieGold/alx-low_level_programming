#include "lists.h"

/**
  * free_listint2 - frees a linked list and set the head to NULL.
  * @head: Double pointer to the head node.
  *
  * Return: Nothing.
  */
void free_listint2(listint_t **head)
{
	listint_t *currentNode = *head;
	listint_t *nextNode = NULL;

	while (currentNode != NULL)
	{
		nextNode = currentNode->next;
		free(currentNode);
		currentNode = nextNode;
	}
	*head = NULL;
}
