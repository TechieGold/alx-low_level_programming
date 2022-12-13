#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * Description - Write a program that prints all possible
  * combinations of two two-digit numbers.
  * Return: Always 0
  */

int main(void)
{
	int ones = '0';
	int tens = '0';
	int hunds = '0';

	for (hunds = '0'; hunds <= '9'; hunds++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (ones = '0'; ones <= '9'; ones++)
				if (!((ones == tens) || (tens == hunds) || (tens > ones) ||
							(hunds > tens)))
				{
					putchar(hunds);
					putchar(tens);
					putchar(ones);
					if (!(ones == '9' && hunds == '7' && tens == '8'))
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
