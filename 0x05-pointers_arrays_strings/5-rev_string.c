#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


/**
 * rev_string - Reverses a string.
 * @s: The input string.
 *
 * Description: This function reverses the characters in the input string.
 */

void rev_string(char *s)
{
	int i, length;
	char a, z;

	length = _strlen(s) - 1;
	i = 0;
	while (i < length)
	{
		a = s[i];
		z = s[length];
		s[i++] = z;
		s[length--] = a;
	}
}
