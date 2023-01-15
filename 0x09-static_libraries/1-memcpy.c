#include <stdio.h>
#include "main.h"

/**
  * _memcpy - A fuction that copies memory area
  * @dest: memory area destination to copy
  * @src: memort area destination to copy from
  * @n: number of bytes
  * Return: A ponter to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
