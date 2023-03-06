#include "main.h"

/**
 * _strspn - Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 * @s: initial segment
 * @accept: contains only bytes to be returned to s
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && *accept != '\0' && *s == *accept)
	{
		count++;
		s++;
		accept++;
	}
	return (count);
}
