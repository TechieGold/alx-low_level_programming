#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * Description - Write a program that prints all possible
  * different combinations of two digits
  * Numbers must be separated by ,, followed by a space
  * The two digits must be different
  * 01 and 10 are considered the same combination of the two digits 0 and 1
  * Print only the smallest combination of two digits
  * Numbers should be printed in ascending order
  *
  * Return: Always 0
  */

int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			if (!((ones == tens) || (tens > ones)))
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))
				{
					putchar(',');
					putchar(' ');

				}
			}
		}
	}
	putchar('\n');
	return (0);
}
