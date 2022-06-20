#include "main.h"

/**
 * _strncpy - Write a function that copies a string.
 * @dest: The buffer for store the string copy
 * @src: The source string
 * @n: The number of string
 * Return: A pointer to the result of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int ind = 0, src_len = 0;

	while (src[ind++])
		src_len++;

	for (ind = 0; src[ind] && ind < n; ind++)
		dest[ind] = src[ind];

	for (ind = src_len; ind < n; ind++)
		dest[ind] = '\0';

	return (dest);
}
