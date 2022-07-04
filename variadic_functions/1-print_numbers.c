#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Write a function that prints numbers
 * @separator: A string
 * @n: Number of parameters
 * @...: Other parameters
 * Return: Success.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i = 0;
	int x;

	va_start(p, n);
	for (; i < n; i++)
	{
		x = va_arg(p, int);
		printf("%d", x);

		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
