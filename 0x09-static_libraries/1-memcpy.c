#include "main.h"

/**
  * _memcpy - A function that copies memory area
  * @dest: Memory area destination to copy
  * @src: Memeory area source to copy from
  * @n: Number of bytes
  *
  * Return: pointer to copy location
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
