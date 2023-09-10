#include <stdio.h>
#include <stdlib.h>

/**
 * main - Check the code
 * @argc: number of arguments
 * @argv: arguments
 * Return: Nothing
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
