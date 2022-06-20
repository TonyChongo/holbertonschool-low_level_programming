#include "main.h"
#include "stdio.h"

/**
 * _strchr - Write a function that locates a character in a string.
 * @s: An input string
 * @c: An input character
 * Return: The pointer to c position
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
