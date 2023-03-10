#include "main.h"

/**
 * _memcpy - Copy memory area
 * @dest: Destination
 * @src: Source
 * @n: Number of bytes
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

