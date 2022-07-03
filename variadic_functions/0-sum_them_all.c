#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters
 * @...: Other parameters
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i = 0;
	int j = 0;

	if (n == 0)
		return (0);

	va_start(p, n);
	for (; i < n; i++)
		j += va_arg(p, int);

	va_end(p);
	return (j);
}
