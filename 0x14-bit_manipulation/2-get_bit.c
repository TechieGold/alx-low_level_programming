#include "main.h"

/**
  * get_bit - Returns the value of a bit at a given index.
  * @n: Number.
  * @index: index of bit to retrive.
  *
  * Return: value of a bit at any index.
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit_mask = 1UL << index;
	unsigned int size = sizeof(unsigned long int) * 8;

	if (index >= size)
		return (-1);
	if ((n & bit_mask) != 0)
		return (1);
	else
		return (0);
}
