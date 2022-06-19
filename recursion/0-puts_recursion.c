#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - Write a function that prints a string.
 * @s: A string char
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
