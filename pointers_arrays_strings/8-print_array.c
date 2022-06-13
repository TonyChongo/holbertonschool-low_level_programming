#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: An input integer
 * @n: An input integer
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int star;

	for (star = 0; star < n; star++)
	{
		printf("%d", a[star]);

		if (star == n - 1)
			continue;

		printf(", ");
	}
	printf("\n");
}
