#include "main.h"

/**
  * _strlen - returns the length of a string.
  * @s: string
  *
  * Return: length of string
  */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}

