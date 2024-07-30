#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int i, flag = 0;
	unsigned long int current;

	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
	}

	if (!flag)
	{
		_putchar('0');
	}
}
