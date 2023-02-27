#include "main.h"

/**
 * puts2 - prints each character of the string
 * @str: input string
 * Return: void
 */
void puts2(char *str)
{
	int n = 1;
	int i = n;

	while (*str)
	{
		if (i-- == 0)
		{
			putchar('\n');
			i = n++;
		}
		putchar(*str++);

		if (i != n - 1)
		{
			putchar('\n');
		}
	}
}
