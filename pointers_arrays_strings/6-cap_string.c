#include "main.h"

/**
 * cap_string - Write a function that capitalizes all words of a string.
 * @k: An input string
 * Return: Nothing.
 */
char *cap_string(char *k)
{
	int in = 0;

	while (k[in])
	{
		while (!(k[in] >= 'a' && k[in] <= 'z'))
			in++;

		if (k[in - 1] == ' ' ||
				k[in - 1] == '\t' ||
				k[in - 1] == '\n' ||
				k[in - 1] == ',' ||
				k[in - 1] == ';' ||
				k[in - 1] == '.' ||
				k[in - 1] == '!' ||
				k[in - 1] == '?' ||
				k[in - 1] == '"' ||
				k[in - 1] == '(' ||
				k[in - 1] == ')' ||
				k[in - 1] == '{' ||
				k[in - 1] == '}' ||
				in == 0)
			k[in] -= 32;
		in++;
	}
	return (k);
}
