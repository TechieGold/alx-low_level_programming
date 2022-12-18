#include "main.h"

/**
  * times_table - check the code
  *
  * Description - Write a function that prints the 9 times
  * table, starting with 0
  * Return: void
  */

void times_table(void)
{
	int number, multi, result;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0');

		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');

			result = number * multi;

			if (result <= 9)
				_putchar(' ');
			else

				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');

		}
		_putchar('\n');
	}

}
