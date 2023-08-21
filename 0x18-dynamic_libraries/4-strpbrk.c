#include <stdio.h>
#include "main.h"

/**
  * _strpbrk - A function that searches a string for any of a set
  * of bytes
  * @s: An input string
  * @accept: An input character to be located into string s
  * Return: A pointer to the byte in s that matches one of the byte
  * in accept, or NULL if no such file is found
  */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = start;
		s++;
	}
	return (NULL);
}
