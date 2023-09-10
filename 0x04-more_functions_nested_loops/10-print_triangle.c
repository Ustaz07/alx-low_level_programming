#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * @size: An input integer
 * Return: Always 0
 */
void print_triangle(int size)
{
	int row = 0, col, n = size - 1;

	if (size > 0)
	{
		for (; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				if (col < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

