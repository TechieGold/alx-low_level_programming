#include "main.h"
#include <stdio.h>

/**
  * _puts_recursion - a function that prints a string
  * @s: Input string
  *
  * Return: Nothing
  */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');


}

