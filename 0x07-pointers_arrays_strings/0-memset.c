#include "main.h"

/**
 * *_memset - fills the first n bytes of the memory area pointed to by
 * with the constant byte b
 * @s: pointer to the memory to fill
 * @n: the number of bytes to fill
 * @b: constant byte to fill memory with
 * Return: a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
	{
		*ptr++ = b;
	}
	return (s);
}
