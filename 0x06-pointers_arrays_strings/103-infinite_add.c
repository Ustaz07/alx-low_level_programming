#include "main.h"

/**
 * infinite_add - Add two numbers represented as strings
 * @n1: First number as a string
 * @n2: Second number as a string
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result buffer, or NULL if result cannot be stored
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;

	int i; /* Declare the loop variable outside the loop */

	/* Loop through each digit position in reverse order */
	for (i = size_r - 2; i >= 0; i--)
	{
		int sum = carry + (n1[i] - '0') + (n2[i] - '0');

		carry = sum / 10;
		r[i] = (sum % 10) + '0';
	}

	/* Handle any remaining carry */
	r[size_r - 1] = carry + '0';

	return (r);
}

