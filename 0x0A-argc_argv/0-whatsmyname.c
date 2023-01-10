#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - A program that prints its name, followed by a new line.
  * @argc: Argument count
  * @argv: Argument vector.
  * Return: 0 on success
  */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
