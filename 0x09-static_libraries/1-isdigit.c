#include "main.h"

/**
 * _isdigit - Checks for a digit between 0 through 9
 * @c: The value being checked
 * Return: 1 for digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
