#include "main.h"

/* _isdigit : will check if the input is a digit
 * @c: is to be checked
 * Return: 1 is it is a digit else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
