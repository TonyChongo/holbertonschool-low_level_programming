#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Write a function that returns a pointer,
 * to a 2 dimensional array of integer
 * @width: An input integer at number of columns
 * @height: An input integer at number of rows
 * Return: NULL if width or height is 0 or negative.
 */
int **alloc_grid(int width, int height)
{
	int **array, i = 0, j = 0;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
		for (; j < width; j++)
			array[i][j] = 0;
	return (array);
}
