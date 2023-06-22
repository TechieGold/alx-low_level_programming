#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: A pointer to a string representing the name to be printed.
 * @f: function pointer that points to a function.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
