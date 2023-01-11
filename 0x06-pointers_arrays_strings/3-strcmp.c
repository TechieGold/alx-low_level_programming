#include "main.h"

/**
  * _strcmp - A function that compares two strings
  * @s1: An input string
  * @s2: An input string
  *
  * Return: The difference btw s1 and s2
  */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
