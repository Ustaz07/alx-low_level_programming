#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: The input string.
 * @accept: The input characters.
 *
 * Return: Pointer to c.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (count);
	}
	return (count);
}
