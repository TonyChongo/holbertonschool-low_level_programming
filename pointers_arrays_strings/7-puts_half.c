#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: An input string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int half = 0, len = 0, n;

	while (str[half++])
		len++;

	if ((len % 2) == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (half = n; half < len; half++)
		_putchar(str[half]);

	_putchar('\n');
}
