#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * int_index - Write a function that searches for an integer.
 * @array: input integer array
 * @size: number of lelements in array
 * @cmp: pointer to the function
 * Return: If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (c = 0; c < size; c++)
			if (cmp(array[c]))
				return (c);
	}

	return (-1);
}
