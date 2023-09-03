#include "main.h"

/**
 * sqrt_check - Function to find the square root recursively.
 * @n: The numb.
 * @natrl: The sqrt.
 *
 * Return: The sqrt if find.
 */
int sqrt_check(int n, int natrl)
{
	if (natrl * natrl == n)
	{
		return (natrl);
	}
	else if (natrl * natrl > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_check(n, natrl + 1));
	}
}

/**
 * _sqrt_recursion - Returning the natural square root of a number.
 * @n: The numb.
 *
 * Return: The natural sqrt of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_check(n, 2));
	}
}
