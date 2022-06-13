#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: An input
 * Return: nothing
 */
void print_line(int n)
{
	int t = 0;

	if (n > 0)
	{
		for (; t < n; t++)
			_putchar('_');
	}
	_putchar('\n');
}
