#include "main.h"

/**
  * print_sign - Entry point
  * @n:
  *
  * Description - Write a function that prints the sign of a number
  *
  * Return: 1 if n is greater than 0, 0 if n is 0
  * and -1 if n is less than 0.
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return(1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return(0);
	}
	else
	{
		 _putchar('-');
		return (-1);
	}
}
