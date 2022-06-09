#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 0, mab;

	for (count = 0, count < 50, count++)
	{
		mab = fib1 + fib2;
		printf("%lu", mab);

		fib1 = fib2;
		fib2 = mab;

		if (count == 49)
			printf('"\n");
		else
			printf(", ");
	}
	return (0);
}
