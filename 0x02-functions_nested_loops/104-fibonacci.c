#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * This program prints the first 98 Fibonacci numbers,
 * separated by comma and space.
 * It uses a simple iterative approach to calculate Fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long a = 1, b = 2, c;
	int count;

	printf("%lu, %lu", a, b);

	for (count = 3; count <= 98; count++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}
