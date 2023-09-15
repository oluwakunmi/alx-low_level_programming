#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 *
 * @argc: The number of arguments provided (including program name).
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, 1 for incorrect number of arguments, 2 for negative byte count.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return 1;
	}

	int byte_count = atoi(argv[1]);

	if (byte_count < 0)
	{
		printf("Error\n");
		return 2;
	}

	char *main_ptr = (char *)&main;
	int i;

	for (i = 0; i < byte_count; i++)
	{
		printf("%02x", main_ptr[i]);
		if (i < byte_count - 1)
			printf(" ");
	}

	printf("\n");
	return 0;
}

