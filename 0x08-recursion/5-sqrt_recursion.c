#include "main.h"

/**
  * _sqrt_recursion - A function that returns the square root of a number, n.
  * @n: An input integer
  *
  * Return: The square root of n
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}

/**
  * _sqrt - Finds the square root of a number
  * @prev: Previous value
  * @root: Square root value
  *
  * Return: The square root
  */

int _sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);

	else if (prev * prev == root)
		return (prev);
	return (_sqrt(prev + 1, root));

}
