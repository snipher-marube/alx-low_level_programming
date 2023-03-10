#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer
 * @accept: String
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int index, n;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[index] == accept[n])
				return (s + index);
		}
	}
			return (NULL);
}
