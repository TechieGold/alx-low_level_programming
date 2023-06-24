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
	int i = 0;
	char *current_string;

	va_start(args, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				current_string = va_arg(args, char *);
				if (current_string == NULL)
					current_string = "(nill)";
				printf("%s ", current_string);
				break;

			if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
						format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
			i++;

		}

	}
	printf("\n");

	va_end(args);
}
