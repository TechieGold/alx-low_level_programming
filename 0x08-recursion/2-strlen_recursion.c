#include "main.h"
#include <stdio.h>

/**
  * _strlen_recursion - A function that returns the length of a string
  * @s: Input string
  * Return: Sting length
  */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
