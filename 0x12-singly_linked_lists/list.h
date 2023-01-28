#ifndef LIST_H_
#define LIST_H_
#include <stdlib.h>

/**
  * struct list_s - singly linked list
  * @str: string - (malloc 'ed string)
  * @len: lemgth of the string
  * @next: points to the next node.
  *
  * Description: singly lined list node structure
  */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* singly linked list - alx */
