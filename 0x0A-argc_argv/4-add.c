#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A program that adds positive numbers.
 * @argc: Arguments' couter.
 * @argv: Argument's values.
 *
 * Return: 0 0n success.
 */

int main(int argc, char **argv)
{
	int i, j, number, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		number = atoi(argv[i]);
		sum += number;
	}
	printf("%d\n", sum);
	return (0);
}
