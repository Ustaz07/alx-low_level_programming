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
	int n = 98;
	unsigned long fib1 = 1, fib2 = 2, nextFib;

	printf("%lu,\t%lu", fib1, fib2);

	for (int i = 3; i <= n; i++)
	{
		nextFib = fib1 + fib2;
		printf(",\t%lu", nextFib);
		fib1 = fib2;
		fib2 = nextFib;
	}

	printf("\n");

	return (0);
}
