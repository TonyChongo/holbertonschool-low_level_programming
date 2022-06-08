#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, followed by a new line.
 */
void print_alphabet_x10(void)
{
	char c;
	int l;

	for (l = 0; l < 10; l++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
