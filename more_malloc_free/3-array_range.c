#include "main.h"
#include <stdlib.h>

/**
 * array_range - Write a function that creates an array of integers
 * @min: address of memory
 * @max: size of memory
 * Return: the pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int i, *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
		ptr[i] = min;

	return (ptr);
}
