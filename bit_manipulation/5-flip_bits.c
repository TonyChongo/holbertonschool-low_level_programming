#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * @n: Unsigned long int
 * @m: ugsigned long int
 * Return: Number if bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbit;

	for (nbit = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbit++;
	}
	return (nbit);
}
