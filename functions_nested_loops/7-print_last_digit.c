#include "main.h"
#include <limits.h>

/**
 * print_last_digit - prints the last digit of a number.
 * @l: An integre input
 * Return: last digit of number l
 */
int print_last_digit(int l)
{
	if (l < 0 && l != INT_MIN)
		l *= -1;
	else if (l == INT_MIN)
		l = 8;

	_putchar((l % 10) + 48);
	return (l % 10);
}
