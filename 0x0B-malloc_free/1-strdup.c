#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated
 * space which contains a copy of a string.
 * @str: The string.
 *
 * Return: pointer to the string copy.
 */

char *_strdup(char *str)
{
	size_t length, i;
	char *strCopy;

	if (str == NULL)
		return (NULL);

	length = strlen(str);
	strCopy = malloc((length + 1) * sizeof(char));

	if (strCopy == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		strCopy[i] = str[i];

	return (strCopy);
}
