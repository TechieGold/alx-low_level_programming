#include "main.h"

/**
  * clear_bit - sets the value of a bit to zero at a given position.
  * @n: pointer to the number.
  * @index: index of the bit to set to 0.
  *
  * Return: 1 on success or -1 on error.
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_mask = ~(1UL << index);
	unsigned long int size = sizeof(unsigned long int) * 8;

	if (index >= size)
		return (-1);

	*n &= bit_mask;

	return (1);
}
