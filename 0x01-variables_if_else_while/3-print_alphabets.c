#include <stdio.h>

/**
 * main - Entry point.
 * Description: Use `putchar` to print alphabet in lowercase
 * and then in uppercase.
 *
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);

	for (c = 'A'; c <= 'Z'; c++)
	putchar(c);
	putchar('\n');

	return (0);
}
