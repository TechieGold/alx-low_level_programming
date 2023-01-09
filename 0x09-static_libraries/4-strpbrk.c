#include "main.h"
#include <stdio.h>

/**
  * _strpbrk - A function that searches for any of set of bytes
  * @s: An input string
  * @accept: An input character to be located into string s
  *
  * Return: A pointer to the byte in s that matches one of the
  * bytes in accept, or NULL if no such byte is found
  */

char *_strpbrk(char *s, char *accept)
{
	char *begin = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = begin;
		s++;
	}
	return (NULL);
}
