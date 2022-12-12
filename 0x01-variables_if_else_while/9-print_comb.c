#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * Description - A  program that prints all possible combinations of
  * single-digit numbers
  * Numbers must be separated by ,, followed by a space
  * Numbers should be printed in ascending order
  * You can only use the putchar
  * Return: Always 0
  */

int main(void)
{
	int NUM = '0';

	while (NUM <= '9')
	{
		putchar(NUM);
		NUM++;
		putchar(',');
		putchar(' ');
	}
	return (0);
}
