#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * Description - A program that prints the lowercase alphabet
  * in reverse, followed by a new line
  * Return: Always 0
  */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}

