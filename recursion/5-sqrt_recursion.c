#include "main.h"

/**
 * sqrt2 - Makes possible from 1 to n
 * @a: Same as n
 * @b: Number that iterates from 1 to n
 * Return: on success 1, on error -1.
 */
int sqrt2*(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}

/**
 * _sqrt_recursion - Return the natural square root of n
 * @n: An input integer
 * Return: 1 if success, -1 if error.
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
