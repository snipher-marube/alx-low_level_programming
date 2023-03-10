#include "main.h"
#include <stddef.h>

/**
 * _strchr -Locates a charcter in a string
 * @c: Character
 * @s: String
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
