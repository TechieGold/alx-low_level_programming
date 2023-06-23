#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of its parameters.
 * @n: Number of parameters.
 *
 * Return:Sum of parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int result = 0, num = 0;
	unsigned int i = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		result += num;
	}

	va_end(args);
	return (result);

}
