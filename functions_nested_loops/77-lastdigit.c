#include "main.h"

int print_last_digit(int l)
{

	if (l < 0)
		l *= -1;

	_putchar((l % 10) + '0');
	return (l % 10);
}
