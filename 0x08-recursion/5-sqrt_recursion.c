#include "main.h"

int sqrt_helper(int n, int guess);

/**
 * _sqrt_recursion - finds the square root
 * @n: number to find square root
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{

		return (sqrt_helper(n, root));
	}
}

/**
 * sqrt_helper - helper function to recursively calculate square root
 * @n: number to find square root
 * @guess: current guess for square root
 * Return: square root
 */

int  sqrt_helper(int n, int guess)
{
	if (n == (guess * guess))
	{
		return (guess);
	}
	else if (guess == n / 2)
	{
		return (-1);
	}
	else
	{
		return (sqrt_helper(n, guess - 1));
	}
}
