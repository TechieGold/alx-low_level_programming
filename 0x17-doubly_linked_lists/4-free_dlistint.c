#include "lists.h"

/**
  * free_dlistint - Fress a DLL.
  * @head: Double pointer to the DLL.
  *
  * Return: void.
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
