#include "main.h"

/**
 * _strlen_recursion - Write a function that returns the length of a string.
 * @s: A string char
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
