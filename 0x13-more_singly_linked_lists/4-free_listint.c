#include <stdlib.h>
#include "lists.h"

/**
  * free_listint -  a function that frees a linked list.
  * @head: pointer to the first list.
  *
  * Return: 0 on success.
  */
void free_listint(listint_t *head)
{
	listint_t *current, *temp;

	current = head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
