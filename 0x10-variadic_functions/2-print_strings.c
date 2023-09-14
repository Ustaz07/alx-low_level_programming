#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - A function that prints strings followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of parameters.
 * @...: The variable parameters.
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list xy; /* Replace 'ap' with 'xy'. */
	unsigned int i = 0;
	char *string;

	va_start(xy, n); /* Replace 'ap' with 'xy'. */
	for (; i < n; i++)
	{
		string = va_arg(xy, char*); /* Replace 'ap' with 'xy'. */
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(xy); /* Replace 'ap' with 'xy'. */
}

