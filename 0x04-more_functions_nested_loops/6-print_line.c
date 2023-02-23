#include "main.h"

/**
 * print_line - function to print line
 * @n : integer value
 * Return: Always 0.
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (n--)
	{
		_putchar('_');
	}

	_putchar('\n');
}
