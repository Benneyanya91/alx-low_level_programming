#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: The place we copy to
 * @src: The place we copy from
 * @n: The number of bytes to be copied
 *
 * Return: Pointers to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n-- > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (ptr);
}
