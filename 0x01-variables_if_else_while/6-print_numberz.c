#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Use `putchar` to print all number of base 10 starting from 0.
 * Use putchar only twice.
 *
 * Return: Always 0
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);

}
