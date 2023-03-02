#include "main.h"

/**
 * *cap_string - capitalizes words of the string
 * @str: word to be capitalized
 * Return: characters
 */
char *cap_string(char *str)
{
	int i;
	int capitalize_next = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		/**
		 * If the current charater is a separator
		 * set the capitalize_next flag
		 */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' ||
				str[i] == '"' || str[i] == '(' || str[i] == ')' ||
				str[i] == '{' || str[i] == '}')
		{
			capitalize_next = 1;
		}
		else if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			capitalize_next = 0;
		}
		else
		{
			capitalize_next = 0;
		}
	}
	return (str);
}
