#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - Write a function that allocates memory using malloc
 * @s:
 * Return: Nothing.
 */

void *malloc_checked(unsigned int b)
{
	int *q;

	q = malloc(b);
	if (q == NULL)
		exit(b);
	return (q);
}
