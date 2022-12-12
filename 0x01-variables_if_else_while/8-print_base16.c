#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * Description - A program that prints all the numbers of base 16 in lowercase
  * followed by a new line
  * Return: Always 0
  */

int main(void)
{
	int num = '0';
	char ch = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);

}
