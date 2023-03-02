#include "main.h"

/**
 * *string_toupper - converts the string to uppercase
 * @str: string of characters
 * Return: Uppercase string characters
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		/* Check if the string characters are in lowwercase */
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/* convert to upper */
			str[i] -= 32;
		}
	}
	return (str);
}
