#include "variadic_functions.h"

/**
  * print_all - prints anything.
  * @format: specifies the type of argument passed.
  *
  * Return: Nothing.
  */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	const char *separator = "";
	char *current_string;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				current_string = va_arg(args, char *);
				if (current_string == NULL)
					current_string = "(nill)";
				printf("%s%s", separator, current_string);
				break;

			default:
				i++;
				continue;

		}

		separator = ", ";
		i++;
	}
	printf("\n");

	va_end(args);
}
