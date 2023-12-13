#include <stdio.h>

/**
 * main - Entry point.
 * Description: This program use `putchar` to print alphabet in lowercase.
 *
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	printf("\n");
	return (0);
}
