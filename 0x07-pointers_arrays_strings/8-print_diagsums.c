#include "main.h"

/**
 * print_diagsums - prints the sum of the diagonals
 * @a: pointer
 * @size: size of the array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + size - i - 1];
	}
	printf("sum1 %d\n", sum1);
	printf("sum2 %d\n", sum2);
}
