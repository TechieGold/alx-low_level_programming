#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all -  A varriadic function that returns
  * the sum of its parameters.
  * @n: mandatory argument of type unsigned int.
  *
  * Return: 0 if n == 0.
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int result = 0, i;

	va_list mySum;

	va_start(mySum, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		result = result + va_arg(mySum, unsigned int);
	}
	va_end(mySum);
	return (result);

}
