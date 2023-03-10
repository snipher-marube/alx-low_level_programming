#include "main.h"

/**
 * _abs - Prints the absolute value of an inter
 * @n: Value to be computed
 * Return: Absolute value of a number or 0
 */

int _abs(int n)
{
	int abs_value;

	if (n < 0)
	{
	abs_value = n * -1;
	return (abs_value);
	}
	return (n);
}
