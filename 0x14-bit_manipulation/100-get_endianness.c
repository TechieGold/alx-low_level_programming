#include "main.h"

/**
  * get_endianness - checks endianness.
  *
  * Return: Nothing.
  */
int get_endianness(void)
{
	int number = 1;
	char *byte = (char *)&number;

	if (*byte == 1)
		return (1);
	return (0);
}
