#include "main.h"

/**
 * *_strncat - concatenates two strings using a given number of bytes
 * @dest: the destination string
 * @src: the source string
 * @n : number of bytes from src
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_length = 0;

	while (dest[index++])
	dest_length++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_length++] = src[index];
	return (dest);
}
