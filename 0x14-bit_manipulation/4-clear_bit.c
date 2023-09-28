#include "main.h"

/**
 * clear_bit - function that Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number.
 * @index: index to clear the bit at.
 *
 * Return: 1 if it worked.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);
	if ((*n & max) != 0)
		*n ^= max;
	return (1);
}

