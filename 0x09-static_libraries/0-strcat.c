#include "main.h"

/**
  * _strcat - a function that concatenates two strings
  * @src: first string
  * @dest: second string
  *
  * Return: a pointer to the resulting string dest
  */

char *_strcat(char *dest, char *src)
{
	char *tem_var = dest;

	while (*dest)
		dest++;

	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (tem_var);

}
