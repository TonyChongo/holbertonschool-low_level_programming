#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - Write a function that allocates memory using malloc
 * @s: A pointer to allocate address
 * Return: Nothing.
 */

void *malloc_checked(unsigned int b)
{
	int *q;

	q = malloc(b);
	if (q == NULL)
		exit(98);
	return (q);
}
