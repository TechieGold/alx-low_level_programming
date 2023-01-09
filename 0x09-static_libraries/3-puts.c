#include "main.h"

/**
  * _puts - prints a string to the stdout
  * followed by a newline
  * @str: string
  *
  * Return: 0 on success
  */

void _puts(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
