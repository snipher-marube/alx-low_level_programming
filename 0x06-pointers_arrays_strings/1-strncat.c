#include "main.h"
#include <string.h>

/**
 * * _strncat - concatenates the two strings upto n bytes from src
 * @dest: Pointer to the destination
 * @src: Pointer to the source string
 * @n: Maximum number of bytes to be used from src
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest + strlen(dest); /* pointer to the end of dest string */

	while (*src != '\0' && n-- > 0)
	{
		*ptr++ = *src++;
	}

	*ptr = '\0'; /* add terminating null byte to dest string */
	return (dest);
}
