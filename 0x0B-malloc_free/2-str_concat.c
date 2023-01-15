#include "main.h"
#include <stdlib.h>

/**
  * str_concat - a function that concatenates two string
  * @s1: Destination string
  * @s2: Source string
  * Return: pointer to a new allocated memory which contains the
  * content of s1 followed by s2.
  * on failure, return NULL
  */
char *str_concat(char *s1, char *s2)
{
	char *ptr, *str1 = s1, *str2 = s2;
	int s1_len = 0, s2_len = 0, count = 0;

	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		s1_len++;
		s1++;
	}
	s1 = str1;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		s2_len++;
		s2++;
	}
	s2 = str2;

	ptr = malloc(sizeof(char) * (s1_len + s2_len + 1));
	str1 = ptr;
	if (ptr == NULL)
		return (NULL);
	for (; count < (s1_len + s2_len); count++)
	{
		if (count < s1_len)
		{
			ptr[count] = *s1;
			s1++;
		}
		else
		{
			ptr[count] = *s2;
			s2++;
		}
	}
	ptr[count] = '\0';
	return (str1);
}
