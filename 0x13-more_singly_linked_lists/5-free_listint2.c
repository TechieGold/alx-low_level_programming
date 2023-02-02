#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - a function that fress a list with the head set to NULL.
  * @head: double pointer to the first element of the list.
  *
  * Return: 0 on success.
  */
void free_listint2(listint_t **head)
{
	listint_t *current, *nextNode;

	current = *head;
	while (current != NULL)
	{
		nextNode = current->next;
		free(current);
		current = nextNode;
	}
	*head = NULL;

}
