#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: double pointer to a  (string).
 * @to: Pointer to a (string) to set s.
 *
 * Return: Description.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
