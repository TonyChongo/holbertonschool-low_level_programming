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

	if (j < n)
		j = n;
	k = i + n;
	cc = malloc(k + 6);
	if (cc == NULL)
	{
		free(cc);
		return (NULL);
	}

	for (l = 0; l < k; l++)
		if (l < i)
			cc[l] = s1[l];
		else
			cc[l] = s2[l - i];

	cc[k] = '\0';

	return (cc);
}
