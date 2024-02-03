#include "main.h"

/**
 * _isdigit  - checks for a digit (0 through 9)
 * @c: Pararmeter of the function
 *
 * Return: 1 if c is a digit other wise 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
