#include "main.h"

/**
  * _strncat - a function that concatenates two strings
  * @dest: an input string
  * @src: an input string
  * @n: an input integer
  * Return: a pointer to the resulting string
  */

char *_strncat(char *dest, char *src, int n)
{
	int src1 = 0, loop_var = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		src1++;
		src++;
	}
	while (*dest)
		dest++;
	if (n > src1)
	{
		n = src1;

		src = start;
	}
	for (; loop_var < n; loop_var++)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (temp);

}
