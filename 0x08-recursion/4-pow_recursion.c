#include "main.h"

/**
 * _pow_recursion - gives the power of x power y
 * @x: first argument
 * @y: second argument as power
 * Return: returns the power of x with y as the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
