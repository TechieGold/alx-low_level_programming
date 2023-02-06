#include <string.h>
#include <math.h>
#include "main.h"

/**
  * binary_to_uint - a function that converts a
  *		binary number to an unsigned int.
  * @b: pointer to a string of 0 and 1 chars.
  *
  * Return: 0 if b is NULL otherwise
  * return the converted number.
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int index;
	int length = strlen(b);

	if (b == NULL)
		return (0);

	for (index = 0; index < length; index++)
	{
		if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}
		else if (b[index] == '1')
		{
			result += pow(2, length - index - 1);
		}
	}
	return (result);
}
