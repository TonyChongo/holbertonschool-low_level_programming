#include <stdio.h>
#include <string.h>
#include "main.h"

/*
* is_palindrome - Function that find polidrome string
* @s: String to find polidrome
* Return: 1 if string is polidrom, o if not
*/

int is_palindrome(char *s)
{
	int length = 0;
	int i, j;

	while (s[length] != '\0')
		length++;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			return 0;
		}
	}

	return 1;
}
