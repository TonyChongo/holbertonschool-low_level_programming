#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: An input int
 * Return: Nothing.
 */
void print_triangle(int size)
{
	int a, s, d = size - 1;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (s = 0; s < size; s++)
			{
				if (s < d)
					_putchar(' ');
				else
					_putchar(35);
			}
			d--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
