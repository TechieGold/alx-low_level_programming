#include <stdio.h>
#include "lists.h"

/**
  * print_listint - prints all the elements of a list
  * @h: pointer to the head of the list
  *
  * Return: the number of nodes.
  */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		count++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (count);
}
