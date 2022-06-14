#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @x: An input string
 * Return: Nothing
 */
char *string_toupper(char *x)
{
	int ind = 0;

	while (x[ind])
	{
		if (x[ind] >= 'a' && x[ind] <= 'z')
			x[ind] -= 32;

		ind++;
	}

	return (x);
}
