#include "3-calc.h"

/**
 * op_add - Returns the sum of a amd b.
 * @a: first number.
 * @b: second number.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of a and b.
 * @a: first number.
 * @b: second number.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of a and b.
 * @a: first number.
 * @b: second number.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the result of dividing a by b.
 * @a: first number.
 * @b: second number.
 *
 * Return: Result of dividing a by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of dividing a by b.
 * @a: first number.
 * @b: second number.
 *
 * Return: Remainder of dividing a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
