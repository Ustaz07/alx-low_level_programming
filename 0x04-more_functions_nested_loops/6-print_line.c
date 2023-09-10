#include "main.h"

/**
 * print_line -  function that draws a straight line in the terminal.
 * @n: is the number of times the character
 *
 * Return: 0 for success
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
