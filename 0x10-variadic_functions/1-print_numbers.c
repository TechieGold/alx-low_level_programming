#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_numbers - a variadic function that prints numbers passed as argument.
  * @separator: string to be printed between numbers(,)
  * @n: indicates the number of integers passed to the function
  *
  * don;t print is separator is NULL.
  * print a new line at the end of function.
  * Return: 0 on success.
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list myNumbers;
	unsigned int count = 0;

	va_start(myNumbers, n);
	for (; count < n; count++)
	{
		printf("%d", va_arg(myNumbers, unsigned int));

		if (separator == NULL)
			continue;
		if (count < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(myNumbers);
}
