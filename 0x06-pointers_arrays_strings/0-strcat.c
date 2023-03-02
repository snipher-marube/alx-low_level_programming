#include "main.h"
#include <string.h>

/**
 * *_strcat - appends the string src to dest
 * @dest: string where the src will be appended
 * @src: the string to be appended to dest
 * Return: characters
 */

char *_strcat(char *dest,  char *src)
{
	char *ptr = dest + strlen(dest); /* pointer to the end of dest string */

	while (*src != '\0')
	{
		/* copy characters fron src to dest */
		*ptr++ = *src++;
	}
	*ptr = '\0'; /* add terminating null byte to dest string */

	return (dest);
}
