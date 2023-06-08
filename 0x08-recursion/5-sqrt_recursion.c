#include "main.h"

int squareRoot(int prev, int number);


/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Input number.
 *
 * Return: Returns the square root of a number, or -1 if invalid.
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);

	return (squareRoot(1, n));
}

/*********** This function find the sqaure root recursively ************/

/**
 * squareRoot - Find the square root recursively.
 * @prev: - The previous value in the recursion.
 * @number: The input number.
 *
 * Return: Returns the squar root of the number, or -1 if not found.
 */
int squareRoot(int prev, int number)
{
	if (prev > number)
		return (-1);

	else if (prev * prev == number)
		return (prev);

	else
		return (squareRoot(prev + 1, number));
}
