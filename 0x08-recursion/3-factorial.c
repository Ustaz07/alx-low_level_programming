#include "main.h"

/**
 * factorial - a function that returns the factorial of a number.
 * @n: An input integer
 * Return: The factorial of n
 */

int factorial(int n)
{
	if (n < 0) /* Check if n is negative */
	{
		return (-1);  /* Return -1 to indicate an error */
	}
	else if (n == 0 || n == 1)  /* Base case: If n is 0 or 1 */
	{
		return (1);  /* Factorial of 0 or 1 is 1 */
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
