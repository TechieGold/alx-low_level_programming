#include "main.h"

/**
  * set_bit - sets the value of a bit to 1 at a given index.
  * @n: Pointer to the number.
  * @index: indext of the bit to set to 1.
  *
  * Return: 1 if it worked, -1 if an error occur.
  */
int set_bit(unsigned long int *n, unsigned int index)
{
		unsigned long int size = sizeof(unsigned long int) * 8;
	unsigned long int bit_mask = 1UL << index;

	if (index >= size)
		return (-1);

	*n |= bit_mask;

	return (1);
}
