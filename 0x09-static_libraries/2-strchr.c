#include "main.h"
#include <stdio.h>

/**
  * _strchr - A function that locates a character in a string.
  * @s: An iput string to search in
  * @c: An input character to locate into string s
  *
  * Return: A pointer to c position
  */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}

