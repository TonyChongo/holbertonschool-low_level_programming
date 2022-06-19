#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Write a function that prints a string.
 * @s: A string char
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	while (*s)
		_putchar(*s++);
	_putchar('\n');
}
