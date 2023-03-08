#include "main.h"

/**
 * _strlen_recursion - print the length of the string
 * @s: pointer to the string
 * Return: return the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
