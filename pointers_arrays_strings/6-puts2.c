#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: An input string
 * Return: Nothing
 */
void puts2(char *str)
{
	int len = 0, q = 0;

	while (str[q++])
		len++;

	for (q = 0; q < len; q += 2)
		_putchar(str[q]);

	_putchar('\n');
}
