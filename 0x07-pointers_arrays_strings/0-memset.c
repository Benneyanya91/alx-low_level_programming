#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: Memory area to filled
 * @b: Bytes
 * @n: The number of bytes
 *
 * Return: Pointer to @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
	*ptr++ = b;

	return (s);
}
