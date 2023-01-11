#include "main.h"

/**
  * _strncpy - A function that copies a string
  * @dest: String destination
  * @src: string source
  * @n: 
  *
  * Return: A pointer to the resulting string dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	for (n = 0; *dest[1] != '\0'; n++)
	{
		src[n] = dest[n];
	}
	dest[n] = '\0';
	return (0);
}
