#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: An input
 * Return: nothing.
 */
void print_diagonal(int n)
{
	int l, s;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (s = 0; s < l; s++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}

	}
	else
	_putchar('\n');
}
