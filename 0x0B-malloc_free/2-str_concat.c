#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: A pointer to the space containing
 * the concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, bothLen;
	char *bothStr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	bothLen = len1 + len2;

	bothStr = malloc((bothLen + 1) * sizeof(char));

	if (bothStr == NULL)
		return (NULL);

	strcpy(bothStr, s1);
	strcat(bothStr, s2);

	return (bothStr);
}
