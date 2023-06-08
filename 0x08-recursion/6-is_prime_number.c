#include "main.h"

int is_divisible(int num, int div);

/**
 * is_prime_number - Checks if a number is prime.
 * @n: An input integer.
 *
 * Return: 1 if number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_divisible(n, div));
}

/**
 * is_divisible - checks if num is divisble.
 * @num: The number to check.
 * @div: The result of division.
 *
 * Return: 1 if num is divisible otherwisw 0 if num is not divisible.
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}
