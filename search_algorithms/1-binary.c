#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: Array to sort
 * @size: Size of the array
 * @value: value of array
 * Return: -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, m = 0, s = 0, r = size - 1;

	if (array == NULL || size <= 0)
		return (-1);

	while (s <= r)
	{
		printf("Searching in array: ");
		for (i = s; i <= r; i++)
		{
			if (i < r)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		m = (s + r) / 2;
		if (array[m] < value)
			s = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
