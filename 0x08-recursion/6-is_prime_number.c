#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - Prints 1 if number is a prime number and 0 otherwise
 * @n: The value
 * Return: 1 for prime number and 0 otherwise
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - Check if number is a prime number
 * @n: the number to be checked
 * @i: the number of iterations
 * Return:1 for prime and 0 otherwise
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
