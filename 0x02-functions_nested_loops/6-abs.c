#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @r: The integer value for which the absolute value is computed.
 *
 * Return: The absolute value of the input integer @r.
 */

int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
