#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - Write a function that prints a name.
 * @name: Pointer of char
 * @f: pointer of void
 * Return: Always success.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
