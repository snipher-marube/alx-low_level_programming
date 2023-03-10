#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints the addition of numbers
 * @argc: first argument
 * @argv: second argument
 * Return: sum
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		char *num_str = argv[i];
		int num = 0;

		for (j = 0; num_str[j] != '\0'; j++)
		{
			if (!isdigit(num_str[j]))
			{
				printf("Error\n");
				return (1);
			}
			num = num * 10 + (num_str[j] - '0');
		}
		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
