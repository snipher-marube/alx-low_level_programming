#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: Pointer to the string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
