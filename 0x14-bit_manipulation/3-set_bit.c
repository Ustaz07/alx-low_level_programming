#include "main.h"

/**
 * set_bit - A function that sets a bit at given index to 1
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to set (starting from 0).
 *
 * Return: 1 if it worked, or -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);
	*n |= max;
	return (1);
}
