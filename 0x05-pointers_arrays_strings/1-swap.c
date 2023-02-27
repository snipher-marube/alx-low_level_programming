#include "main.h"

/**
 * swap_int - swaps the values of a with the values of b
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 * Return void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
