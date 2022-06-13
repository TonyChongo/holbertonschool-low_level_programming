#include "main.h"

/**
 * print_numbers - Write a function that prints the numbers, from 0 to 9.
 * Return: Always 0
 */
void print_numbers(void)
{
	int z;

	for (z = '0'; z <= '9'; z++)
		_putchar(z);
	_putchar('\n');
}
