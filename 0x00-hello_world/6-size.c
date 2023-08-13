#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int w;
	long int x;
	long long int y;
	char z;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(z));
	printf("Size of a int: %lu byte(s)\n", (unsigned long) sizeof(w));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(x));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(y));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
	return (0);
}

