#include <stdio.h>
#include "main.h"

/**
  * main - A program that prints the name of the file it was compiled from.
  * Followed by a new line.
  *
  * Return: Always 0.
  */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
