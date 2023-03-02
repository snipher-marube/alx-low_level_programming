#include "main.h"
#include <string.h>

/**
 * *_strncpy - copies upto n characters from src to dest
 * @dest: destination of copied characters
 * @src: srce of the characters to be copied
 * @n: number of characters in bytes
 * Return: return the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		/* copy up to n characters from src to dest */
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		/* fill the remaining bytes with null characters */
		dest[i] = '\0';
	}
	return (dest);
}
