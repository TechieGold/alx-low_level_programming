#include <stdio.h>

/**
 * main - Entry point
 * Description: This program print all number of base 10 starting from 0.
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}

