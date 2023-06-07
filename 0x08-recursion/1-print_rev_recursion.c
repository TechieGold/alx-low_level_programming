#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: the string.
 *
 * Return: 0 on success
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);

		_putchar(*s);
	}
}
