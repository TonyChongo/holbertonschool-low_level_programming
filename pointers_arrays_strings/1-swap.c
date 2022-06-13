#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: An input int
 * @b: An input int
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
