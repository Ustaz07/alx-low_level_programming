#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Print anything based on the format string.
 * @format: A list of type of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list xy;
	char *temp = "";
	char *str;
	unsigned int i = 0;

	va_start(xy, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", temp, va_arg(xy, int));
				break;
			case 'i':
				printf("%s%d", temp, va_arg(xy, int));
				break;
			case 'f':
				printf("%s%f", temp, va_arg(xy, double));
				break;
			case 's':

					str = va_arg(xy, char *);

					if (str == NULL)
						printf("(nil)");
					printf("%s%s", temp, str);

				break;
				default:
				i++;
				continue;
		}
		temp = ", ";
		i++;
	}

	va_end(xy);

	printf("\n");
}
