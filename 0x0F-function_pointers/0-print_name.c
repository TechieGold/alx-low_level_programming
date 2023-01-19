#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name - A function that prints a name.
  * @name: Name of the person
  * @f: pointer to print_name function
  *
  * Return: 0 on success.
  */

void print_name(char *name, void (*f)(char*))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
