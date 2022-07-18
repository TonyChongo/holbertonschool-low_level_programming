#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: Number of get bit
 * @index: the index, starting from 0 of the bit to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int m;

	if (n == 0 && index < 64)
		return (0);

	for (m = 0; m <= 63; n >>= 1, m++)
	{
		if (index == m)
		{
			return (n & 1);
		}
	}
	return (-1);
}
