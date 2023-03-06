#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src
 * to memory area dest
 * @src: source of bytes to copied
 * @dest: destination of the bytes copied
 * @n: number of bytes to be copied
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_dest = dest;
	char *ptr_src = src;

	while (n-- > 0)
	{
		*ptr_dest++ = *ptr_src++;
	}
	return (dest);
}
