#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: Number of get bit
 * @index: the index, starting from 0 of the bit to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m = 0x01;

	m <<= index;
	if (m == 0)
		return (-1);

	if ((n & m))
		return (1);
	else
		return (0);
}
