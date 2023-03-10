#include "main.h"

/**
 * _isalpha - Checks if c is a letter, uppercase or lowercase
 * @c: The character to be checked
 * Return: 1 for letter, uppercase or lowercase
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
