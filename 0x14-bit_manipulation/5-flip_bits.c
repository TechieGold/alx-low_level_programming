#include "main.h"

/**
  * flip_bits - returns the number of bits you would need
  * to flip to get from one number to another.
  * @n: first number.
  * @m: second number.
  *
  * Return: Number of bits to flip.
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int flip_count = 0;

	while (xor_result != 0)
	{
		flip_count += xor_result & 1;
		xor_result >>= 1;
	}
	return (flip_count);
}
