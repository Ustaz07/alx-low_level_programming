#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Print a name using a given function.
 * @name: The name to be printed.
 * @f: A ptr to a function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
