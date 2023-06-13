#include <stdio.h>

/**
 * main - prints all arguments it recieves.
 * @argc: ARGument count.
 * @argv: ARGument vector.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
