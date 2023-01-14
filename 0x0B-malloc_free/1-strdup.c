#include "main.h"
#include <stdlib.h>

/**
  * _strdup - returns a pointer to a new string which
  * is a duplicate of the string.
  * prototype: char *_strdup(char *str);
  * @str: input string
  *
  * Return: Null if str = NULL
  * on sucess, returns a duplicate string
  */

char *_strdup(char *str)
{
	char *ptr;
	int count;
	int str_len = 0;

	while (str[str_len] != '\0')
	{
		str_len++;
	}
	ptr = malloc(str_len * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);

	for (count = 0; str[count] != '\0'; count++)
		ptr[count] = str[count];

	ptr[count] = '\0';

	return (ptr);
}
