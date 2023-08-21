#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
{
	*(dest + i) = *(src + i);
	if (*(src + i) == '\0')
	break;
	i++;
}
	return (dest);

}
