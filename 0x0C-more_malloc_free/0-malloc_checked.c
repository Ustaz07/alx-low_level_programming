#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates memory using malloc.
 * @b: An unsigned input integer.
 * Return: Pointer to allocated memory or NULL if it fails.
 */

void *malloc_checked(unsigned int b)
{
        void *x;

        x = malloc(b);

        if (x == NULL)
        {
                exit(98);
        }
        return (x);
}
