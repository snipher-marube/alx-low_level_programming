#include "main.h"

/**
 * _islower - Check is the letter is lowercase
 * @c: The character to be checked
 * Return: 1 for lower case and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
