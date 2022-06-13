#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: An input string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int p = 0, len = 0;
	char h;

	while (s[p++])
		len++;

	for (p = len - 1; p >= len / 2; p--)
	{
		h = s[p];
		s[p] = s[len - p - 1];
		s[len - p - 1] = h;
	}
}
