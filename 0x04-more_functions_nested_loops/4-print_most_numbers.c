#include "main.h"

/**
  * print_most_numbers - prints numbers but not all.
  *
  * Description - Write a function that prints the numbers, from 0 to 9
  * followed by a new line.
  * Do not print 2 and 4
  *
  * Return: Always 0.
  */

void print_most_numbers(void)
{
	char nums;

	for (nums = '0'; nums <= '9'; nums++)
	{
		if (nums == '2' || nums == '4')
		{
			continue;
		}
		_putchar(nums);
	}
	_putchar('\n');
}
