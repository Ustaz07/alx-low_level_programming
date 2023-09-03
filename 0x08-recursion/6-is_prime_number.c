#include "main.h"

/**
 * is_prime_check - Function to check if a number is prime.
 * @n: The number to check for primality.
 * @div: divisor.
 * Return: 1 if prime, 0 if not.
 */
int is_prime_check(int n, int div)
{
	if (div <= 1)
	{
		return (n >= 2);
	}
	if (n % div == 0)
	{
		return (0);
	}
	return (is_prime_check(n, div - 1));
}

/**
 * is_prime_number - Checks if an input integer is a prime number.
 * @n: The integer to check.
 * Return: 1 if prime, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_check(n, n - 1));
			}
