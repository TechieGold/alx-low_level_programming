#include "lists.h"

/**
  * free_list - frees a linked list.
  *@head: pointer to the first node.
  *
  * Return: Nothing.
  */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *temp = NULL;

	while (current != NULL)
	{
		temp = current;
		current = current->next;

		free(temp->str);
		free(temp);
	}
}
