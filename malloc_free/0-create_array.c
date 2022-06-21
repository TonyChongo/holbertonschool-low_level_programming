#include "main.h"
#include <stdlib.h>

/**
 * create_array - Write a function that creates an array of chars
 * @size: An input unsigned integer
 * @c: An input character
 * Return: NULL if size = 0 or fail.
 */
char *create_array(unsigned int size, char c)
{
	char *h;
	unsigned int x = 0;

	h = malloc(size * sizeof(char));

	if (h == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (x < size)
	{
		h[x] = c;
		x++;
	}
	return (h);
}
