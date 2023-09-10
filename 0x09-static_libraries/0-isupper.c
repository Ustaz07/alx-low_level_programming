#include "main.h"

/**
 * _isupper - checks for upper case
 * @c: parameter to be pass
 *
 * Return: Return 1 if c is upper, other wise 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
