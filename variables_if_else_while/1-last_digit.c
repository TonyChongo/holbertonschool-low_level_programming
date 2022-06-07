#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Engtry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	        int num;
		
		srand(time(0));
		num = rand() - RAND_MAX / 2;
		
		if (num % 10 > 5)
			printf("Last digit of %d and is greater than 5\n", num, num % 10);
		else if (num % 10 == 0)
			printf("Last digit of %d and is 0\n", num, num % 10);
		else
			printf("Last digit of %d and is less than 6 and not 0\n", num, num % 10);
		
		return (0);
}
