#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The times table to be printed.
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int result = i * j;

				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					if (result < 10)
						_putchar(' ');
					if (result < 100)
						_putchar(' ');
				}

				if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
				}
				else if (result >= 10)
				{
					_putchar(' ');
					_putchar((result / 10) + '0');
				}
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

