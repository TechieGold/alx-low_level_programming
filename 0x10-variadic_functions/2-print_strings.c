#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: A string to be printed between the strings.
 * @n: Number of strings passed to the function.
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *string;

	va_start(args, n);

	if (n == 0)
		return;

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, const char *);

		if (string == NULL)
		{
			printf("nil");
		}

		else
			printf("%s", string);

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);

}
