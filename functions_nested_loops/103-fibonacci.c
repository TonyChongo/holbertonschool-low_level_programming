#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibme;
	float tot_me;

	while (1)
	{
		fibme = fib1 + fib2;
		if (fibme > 4000000)
			break;

		if ((fibme % 2) == 0)
			tot_me += fibme;

		fib1 = fib2;
		fib2 = fibme;
	}
	printf("%.0f\n", tot_me);

	return (0);
}
