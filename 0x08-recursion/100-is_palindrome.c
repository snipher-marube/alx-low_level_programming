#include "main.h"

int comparator(char *s, int x, int y);
int _strlen_recursion(char *s);

/**
 * _strlen_recursion - return the length of a string
 * @s: tring
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares each character of the string.
 * @s: string
 * @x: smallest iterator
 * @y: biggest iterator
 * Return: .
 */

int comparator(char *s, int x, int y)
{
	if (*(s + x) == *(s + y))
	{
		if (x == y || x == y + 1)
			return (1);
		return (0 + comparator(s, x + 1, y - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome
 * @s: string
 * Return: 1 if s is a plindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
