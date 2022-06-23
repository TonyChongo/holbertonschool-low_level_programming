#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Write a function that returns a pointer to a newly allocated
 * @str: A string
 * Return: NULL if string null
 */
char *_strdup(char *str)
{
	char *d;
	int i, l = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		l++;

	d = malloc(sizeof(char) * (l + 1));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		d[i] = str[i];

	d[l] = '\0';

	return (d);
}
