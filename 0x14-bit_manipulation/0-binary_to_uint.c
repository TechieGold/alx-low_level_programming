#include "main.h"

/**
 *  binary_to_uint - converts a binary to unsigned int.
 * @b: pointer to the binary number.
 * Return: The converted number or zero if one of the binary string
 * is not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		else
			decimal = (decimal * 2) + (*b - '0');
		b++;
	}
	return (decimal);
}
