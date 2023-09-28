#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long int.
 * @n: The number to be printed in binary.
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	int shift = sizeof(n) * 8 - 1;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (shift >= 0)
	{
		if ((n >> shift) & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
		shift--;
	}
}

