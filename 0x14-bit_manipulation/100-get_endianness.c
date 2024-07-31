#include "main.h"

/**
 * get_endianness - Checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
    /**
     * union to test endianness
     * @i: integer to test
     * @c: first byte of integer
     */
    union 
    {
        unsigned int i;
        char c[4];
    } test;

    test.i = 1;

    return (test.c[0]);
}
