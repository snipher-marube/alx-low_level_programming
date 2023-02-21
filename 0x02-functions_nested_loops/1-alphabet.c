#include "main.h"

/**
 * main - prints alphabet
 * Return - always success
 */

void print_alphabet(void)
{
	int n;
	
	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
