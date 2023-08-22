/**
 * _strcpy -  function that copies the string pointed to by src,
 *including the terminating null byte (\0),
 *to the buffer pointed to by dest.
 *
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}
