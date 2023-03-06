#include "main.h"
/**
 * _strchr - returns a ponter to the first occurence
 * @c: ponted occurrence
 * @c: result of the pointed c
 * @s: returned string pointer
 * Return: string or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
