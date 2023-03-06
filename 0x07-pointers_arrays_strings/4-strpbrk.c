#include "main.h"

/**
 * _strpbrk - locates the first occurence in the string
 * @s: string to be location will happen from
 * @accept: string bytes
 * Return: a pointer to the byte s or NULL if no such byte
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *ptr = accept;

		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				return (s);
			}
			ptr++;
		}
		s++;
	}
	return (NULL);
}
