#include "variadic_functions.h"

/**
 * print_numbers - A function that prints a number.
 * @separator: string to be printed wbetween numbers.
 * @n: Number os integers passed to the function.
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);

		if (separator != NULL)
		{
			printf("%d", num);

			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
		else
			printf("%d", num);

	}

	va_end(args);

	printf("\n");
}
