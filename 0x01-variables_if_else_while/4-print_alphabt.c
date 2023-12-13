#include <stdio.h>
/**
 * main - Entry point.
 * Description: Use `putchar` to print alphabets in lowercase
 * except 'e' and 'q'.
 *
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');

	return (0);
}
