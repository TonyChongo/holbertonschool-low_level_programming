#include "main.h"

/**
 * _puts - function that prints a string
 * @str: An input string / character
 * Return: Nothing
 */
void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
