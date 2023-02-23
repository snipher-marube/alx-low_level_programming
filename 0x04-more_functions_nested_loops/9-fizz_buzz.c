#include <stdio.h>

/**
 * main - check the code for ALX SE  students.
 *
 * Return: Always 0.
 */
int main(void)
{
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			print("%d", i);
		}
	}
	printf("\n");
	return (0);
}
