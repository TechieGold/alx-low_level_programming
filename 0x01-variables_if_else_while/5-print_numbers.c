#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * Return: Always 0
  */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}

