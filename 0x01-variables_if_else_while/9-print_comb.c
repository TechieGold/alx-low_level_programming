#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description - A  program that prints all possible combinations of
 * single-digit numbers. You can only use putchar.
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
