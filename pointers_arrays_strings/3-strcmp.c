#include "main.h"

/**
 * _strcmp - Write a function that compares two strings.
 * @s1: A string to compare
 * @s2: Another string to compare
 * Return: Depend on comparison.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
