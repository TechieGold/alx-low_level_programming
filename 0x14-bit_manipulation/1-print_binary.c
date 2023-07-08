#include "main.h"

/**
  * print_binary - prints the binary represetation of a number.
  * @n: Number to convert to binary and print.
  *
  * Return: Nothing.
  */

void print_binary(unsigned long int n)
{
	int bit_count = sizeof(unsigned long int) * 8;
	unsigned long int bit_mask = 1UL << (bit_count - 1);
	int leading_zero = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (bit_mask != 0)
	{
		if ((n & bit_mask) != 0)
		{
			leading_zero = 0;
			_putchar('1');
		}
		else if (!leading_zero)
		{
			_putchar('0');
		}
		bit_mask >>= 1;
	}
}

