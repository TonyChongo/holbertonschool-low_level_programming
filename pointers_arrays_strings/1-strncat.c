#include "main.h"

/**
 * _strncat - Write a function that concatenates two strings.
 * @dest: A string to pointed
 * @src: The source to pointed
 * @n: An input int
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, dest_len = 0;

	while (dest[a++])
		dest_len++;

	for (a = 0; src[a] && a < n; a++)
		dest[dest_len++] = src[a];

	return (dest);
}
