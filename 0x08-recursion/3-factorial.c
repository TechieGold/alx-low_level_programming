#include "main.h"
#include <stdio.h>

/**
  * factorial - A fuction that returns the factorial of a given number.
  * @n: Input number
  *
  * Return: The factorial of n
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n <= 1)
		return (1);

	else
		return (n * factorial(n - 1));
}
