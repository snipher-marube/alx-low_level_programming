#include "main.h"

/**
 * _sqrt_recursion - finds the square root
 * @n: number to find square root
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int i = 1;

		while (i * i <= n)
		{
			i++;
		}
		i--;
		if (i * i == n)
		{
			return (i);
		}
		else
		{
			return (-1);
		}
	}
}
