#include "main.h"

/**
 * print_square -  function that prints a square
 * @size: An input int
 * Return: Nothing
 */
void print_square(int size)
{
	int s1, s2;

	if (size > 0)
	{
		for (s1 = 0; s1 < size; s1++)
		{
			for (s2 = 0; s2 < size; s2++)
				_putchar(35);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
