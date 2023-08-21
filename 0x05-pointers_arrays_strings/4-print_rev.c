#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: The input string.
 */

void print_rev(char *s)
{
	int length  = 0;

	while (s[length] != '\0')
		length++;

	while (length)
		_putchar(s[--length]);

	_putchar('\n');
}
