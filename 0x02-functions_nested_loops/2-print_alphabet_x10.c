#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description - A program that prints 5 times the
 * alphabet, followed by a new line.
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int i;
	char alph;

	for (i = 0; i < 10; i++)

	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}

		_putchar('\n');
	}
}
