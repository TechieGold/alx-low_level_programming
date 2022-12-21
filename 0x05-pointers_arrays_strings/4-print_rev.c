#include "main.h"

/**
  * print_rev - prints a string in reverse
  * followed by a new line
  * @s: input for string
  * Return: nothing
  */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	while (i)
	_putchar(s[--i]);
	_putchar('\n');
}
