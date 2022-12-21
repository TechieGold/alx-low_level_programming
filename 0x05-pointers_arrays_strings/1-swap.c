#include "main.h"

/**
  * swap_int - swaps the value of two integers
  * @a: first integer
  * @b: second integer
  * Return: Nothing
  */

void swap_int(int *a, int *b)
{
	int swap_var;

	swap_var = *a;
	*a = *b;
	*b = swap_var;
}
