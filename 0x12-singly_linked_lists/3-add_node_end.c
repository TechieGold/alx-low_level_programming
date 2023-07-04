#include "lists.h"

/**
  * add_node_end - Adds node at the end of a list.
  * @head: pointer to the head pointer of the list.
  *@str: String to be added at the end.
  *
  * Return: Address of the new element or NULL if it fails.
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL, *current;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}

