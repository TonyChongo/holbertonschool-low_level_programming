#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: Nothing
 */
void times_table(void)
{
	int u, c, l;

	for (u = 0; u <= 9; u++)
	{
		for (c = 0; c <= 9; c++)
		{
			l = u * c;

			if ((l / 10) == 0)
			{
				if (c != 0)
					_putchar(' ');
				_putchar(l + '0');

				if (c == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((l / 10) + '0');
				_putchar((l % 10) + '0');
				if (c == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
