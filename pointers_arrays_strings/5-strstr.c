#include "main.h"
#include <stdio.h>

/**
 * _strstr - Write a function that locates a substring.
 * @haystack: A string
 * @needle: A substring
 * Return: a pointer to the beginning of the located substring, or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	char *i = needle, *l = haystack;

	while (*haystack != '\0')
	{
		l = haystack;
		needle = i;

		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack -= 5);
		haystack = l + 1;
	}
	return (NULL);
}
