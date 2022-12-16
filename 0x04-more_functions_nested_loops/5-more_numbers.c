#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 *
 * Description - Write a function that prints 10 times
 * the numbers, from 0 to 14
 * followed by a new line
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int num;
	int i;

	for (num = 0; num <= 9; num++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
