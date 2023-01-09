#include "main.h"

/**
  * _strcpy - copies the string pointed to by src
  * @dest: destination
  * @src: source
  *
  * Return: the pointer to the dest.
  */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		*(dest + i) = *(src + i);
		if (*(src + 1) == '\0')
			break;
		i++;
	}
	return (dest);
}

