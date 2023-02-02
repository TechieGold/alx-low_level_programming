#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - delets the head of a linked list.
  * @head: double pointer to the head of the list.
  *
  * Return: the head nodes data(n).
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (head == NULL)
		return (0);

	temp = *head;
	i = temp->n;
	*head = (*head)->next;
	free(temp);
	return (i);
}
