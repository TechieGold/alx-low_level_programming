#include "stdio.h"

/**
 * main - Entry point.
 * Description: This program use `putchar` to print base64 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
