#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Write a function that concatenates two strings
 * @s1: A pointer content
 * @s2: Another pointer content
 * Return: NULL if passed or failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *scc;
	int in, ci = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (in = 0; s1[in] || s2[in]; in++)
		l++;

	scc = malloc(sizeof(char) * l);

	if (scc == NULL)
		return (NULL);

	for (in = 0; s1[in]; in++)
		scc[ci++] = s1[in];
	for (in = 0; s2[in]; in++)
		scc[ci++] = s2[in];

	return (scc);
}
