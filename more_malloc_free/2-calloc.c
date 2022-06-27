#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Write a function that allocates memory for an array
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: NULL if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int c;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	c = 0;
	while (c < nmemb * size)
	{
		ptr[c] = 0;
		c++;
	}
	return (ptr);
}
