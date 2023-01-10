#include "main.h"
#include <stdio.h>

/**
  * _print_rev_recursion - A function that prints string in reverse
  * @s: Input string
  *
  * Return: 0 on success.
  */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
