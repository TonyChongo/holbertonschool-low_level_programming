#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Write a function that concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n:  bytes of s2
 * Return: NULL if function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cc;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n >= j)
		cc = malloc((i + j + 1) * sizeof(char));
	else
		cc = malloc((i + n + 1) * sizeof(char));
	if (cc == NULL)
	{
		free(cc);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		cc[k] = s1[k];
	for (l = 0; l < n && l < j; l++, k++)
		cc[k] = s2[l];

	cc[k] = '\0';

	return (cc);
}
