#include "main.h"

/**
 * _strcat - Write a function that concatenates two strings.
 * @dest: A pointer to concatenates
 * @src: The source of string to pointed
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, dest_len = 0;

	while (dest[a++])
		dest_len++;

	for (a = 0; src[a]; a++)
		dest[dest_len++] = src[a];

	return (dest);
}
