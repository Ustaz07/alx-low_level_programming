#include <stdarg.h>

/**
 * sum_them_all - Calculate the sum of its parameters.
 * @n: The number of arguments.
 * @...: The variable arguments to be summed.
 *
 * Return: The sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list xy;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(xy, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(xy, int);
	}

	va_end(xy);

	return (sum);
}

