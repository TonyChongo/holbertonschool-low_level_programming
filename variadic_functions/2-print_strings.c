#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings
 * @separator: A string
 * @n: Number of parameters
 * @...: Other parameters
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i = 0;
	char *str;

	va_start(p, n);
	for (; i < n; i++)
	{
		str = va_arg(p, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
