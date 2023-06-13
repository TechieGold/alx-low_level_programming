#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two integer.
 * @argc: ARGument count.
 * @argv: ARGument vector.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);
	result = arg1 * arg2;

	printf("%d\n", result);
	return (0);
}
