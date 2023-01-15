#include "main.h"

/**
  * _strncat - A function that concatenates two strings
  * @dest: string destination
  * @src: string source
  * @n: Number of bytes to be used
  *
  * Return: A pointer to the resulting string dest.
  */

char *_strncat(char *dest, char *src, int n)
{
	int src1 = 0, loop_var = 0;
	char *temp = dest, *begin = src;

	while (*src)
	{
		src1++;
		src++;

		while (*dest)
			dest++;
	}
	if (n > src1)
		n = src1;

	src = begin;
	for (; loop_var < n; loop_var++)
		*dest++ = *src++;

	*dest = '\0';

	return (temp);
}
