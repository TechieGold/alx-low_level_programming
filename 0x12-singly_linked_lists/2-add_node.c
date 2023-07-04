#include "lists.h"

/**
  * add_node - Adds a node at the beginning of a list.
  * @head: pointer to the head pointer of the list.
  * @str: String to be added as new node.
  *
  * Return: Address of the new element or NULL if it fails.
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *my_node = NULL;

	if (str == NULL)
		return (NULL);

	my_node = malloc(sizeof(list_t));
	if (my_node == NULL)
		return (NULL);

	my_node->str = strdup(str);
	if (my_node->str == NULL)
		return (NULL);

	my_node->next = *head;
	*head = my_node;

	return (my_node);
}
