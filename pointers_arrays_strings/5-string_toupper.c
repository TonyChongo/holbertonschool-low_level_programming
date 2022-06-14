#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @x: An input string
 * Return: Nothing
 */
char *string_toupper(char *x)
{
	char *start = x;

	while (*x)
	{
		if (*x >= 'a' && *x <= 'z')
			*x -= 32;
		x++;
	}

	return (start);
}
