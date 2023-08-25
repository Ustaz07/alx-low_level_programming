#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Point to the destination string.
 * @src: Point to the source string.
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
    char *ptr = dest;

    while (*ptr)
        ptr++;

    while (*src)
    {
        *ptr = *src;
        ptr++;
        src++;
    }

    *ptr = '\0';

    return dest;
}
