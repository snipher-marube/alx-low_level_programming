#include "main.h"

/**
 * _strstr - Finds the first occurence of the substring
 * @needle: substring where location will be found
 * @haystack: string that has needle
 * Return: return the pointer to the beginning of the located substring or Null
 * if not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *ptr = haystack;

	while (*ptr != '\0')
	{
		char *sub_ptr = ptr;
		char *sub_needle = needle;

		while (*sub_needle != '\0' && *sub_ptr == *sub_needle)
		{
			sub_ptr++;
			sub_needle++;
		}
		if (*sub_needle == '\0')
		{
			return (ptr);
		}
		ptr++;
	}
	return (NULL);
}
