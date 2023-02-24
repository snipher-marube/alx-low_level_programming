#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	long num = 612852475143;
	int factor = 2;

	while (num > 1)
	{
		if (num % factor == 0)
		{
			num /= factor;
			continue;
		}
		factor++;
	}
	printf("%li\n", factor);

	return (0);
}
