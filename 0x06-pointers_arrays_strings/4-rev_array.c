#include "main.h"

/**
 * reverse_array - Reverses the content of array integers
 * @a: pointer to the array
 * @n: number of the elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
