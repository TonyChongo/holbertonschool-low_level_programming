#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: The value of times table to be printed.
 * Return:  Nothing
 */
void print_times_table(int n)
{
	int a, s, d;
	
	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');

			for (s = 1; s <= n; s++)
			{
				_putchar(',');
				_putchar(' ');

				d = a * s;

				if (d <= 99)
					_putchar(' ');
				if (d <= 9)
					_putchar(' ');
				
				if (d >= 100)
				{
					_putchar((d / 100) + '0');
					_putchar(((d / 10) % 10) + '0');
				}

				else if (d <= 99 && d >= 10)
				{
					_putchar((d / 10) + '0');
				}
				_putchar((d % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
