#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, 1 for incorrect arg, 2 for negative no.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *main_address = (unsigned char *)main;
	int i;

	for (i = 0; i < number_of_bytes; i++)
	{
		printf("%02x", main_address[i]);
		if (i < number_of_bytes - 1)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}

