#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * set_string - sets the value of a pointer to char
 * @s: string
 * @to: to string
 * Return: void
 */
void set_string(char **s, char *to)
{
	int len = strlen(to);

	*s = (char *) malloc((len + 1) * sizeof(char));
	strcpy(*s, to);
}
