#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - Write a function that executes a function
 * given as a parameter on each element of an array.
 * @array: Pointer of int
 * @size: Size of size
 * @action: pointer of fonction void
 * Return: Always success.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
