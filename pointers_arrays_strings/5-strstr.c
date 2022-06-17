#include "main.h"
#include <stddef.h>

/**
 * _strstr - Write a function that locates a substring.
 * @haystack: A string
 * @needle: A substring
 * Return: a pointer to the beginning of the located substring, or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	char *i = needle;
	char *l = haystack;

	while (*haystack)
	{
		l = haystack;
		needle = i;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = l + 1;
	}
	return (NULL);
}
