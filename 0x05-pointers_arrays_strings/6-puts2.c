#include "main.h"

/**
 * puts2 - A function that prints every other character of a string,
 * starting with the first character
 * followed by a new line.
 *
 * @str: string input
 */

void puts2(char *str)
{
	int length = 0, i = 0;

	while (str[length] != '\0')
	length++;

	length -= 1;

	for (; i <= length; i += 2)
	_putchar(str[i]);
	_putchar('\n');
}
