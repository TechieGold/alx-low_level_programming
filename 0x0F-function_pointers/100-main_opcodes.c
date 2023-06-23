#include <stdio.h>
#include <stdlib.h>

void print_opcode(int num_bytes);

/**
 * print_opcode - prints the opcode of the main function.
 * @num_bytes: The number of bytes to print.
 *
 * Return: Nothing.
 */
void print_opcode(int num_bytes)
{
	int i;
	unsigned char *main_ptr = (unsigned char
			*)__builtin_extract_return_addr(__builtin_return_address(0));

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", main_ptr[i]);
		if (i != num_bytes - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Entry point.
 * @argc: The number of command-Line arguments.
 * @argv: An array containing the command-Line arguments.
 *
 * Return: 0 on success, 1 or 2 on failure.
 */
int main(int argc, char *argv[])
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcode(bytes);

	return (0);
}
