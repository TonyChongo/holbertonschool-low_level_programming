#include "main.h"

/**
 * leet - Write a function that encodes a string into 1337
 * @s: An input string
 * Return: Nothing.
 */
char *leet(char *s)
{
	int i = 0, l;
	char subs[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[i])
	{
		for (l = 0; l < 10; l++)
			if (s[i] == str[l])
				s[i] = subs[l];
		i++;
	}
	return (s);
}
