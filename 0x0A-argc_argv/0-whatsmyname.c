#include <stdio.h>

/**
 * main - prints the name of a program
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
