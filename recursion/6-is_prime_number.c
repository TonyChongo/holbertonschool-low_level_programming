#include "main.h"

/**
 * prime2 - prime 2 int
 * @a: An input to prime
 * @b: An input to prime
 * Return: 1 if a prime number ontherwise 0.
 */
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is pn
 * @n: An input integer
 * Return: 1 if a prime number ontherwise 0.
 */
int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	return (prime2(n, 2));
}
