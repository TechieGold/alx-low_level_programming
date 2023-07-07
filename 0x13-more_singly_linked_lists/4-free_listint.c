#include "lists.h"

/**
  * free_listint - Frees a listint_t.
  * @head: pointer to the head node.
  *
  * Return: Nothing.
  */
void free_listint(listint_t *head)
{
	listint_t *currentNode = head;
	listint_t *nextNode = NULL;

	while (currentNode != NULL)
	{
		nextNode = currentNode->next;
		free(currentNode);
		currentNode = nextNode;
	}
}
