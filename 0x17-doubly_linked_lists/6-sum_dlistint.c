#include "lists.h"

/**
  * sum_dlistint - Returns the sum of all data (n) in a DLL.
  * @head: pointer to the head of the DLL.
  *
  *Return: Returns the sum of all data in the list.
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
