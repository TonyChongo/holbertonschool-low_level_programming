#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	int bird, cat, cat2;
	long int s1, s2, rs1, rs2, ss1, ss2;

	s1 = 1;
	s2 = 2;
	cat = cat2 = 1;
	printf("%ld, %ld", s1, s2);
	for (bird = 0; bird < 96; bird++)
	{
		if (cat)
		{
			rs1 = s1 + s2;
			printf(", %ld", rs1);
			s1 = s2;
			s2 = rs1;
		}
		else
		{
			if (cat2)
			{
				ss1 = s1 % 1000000000;
				ss2 = s2 % 1000000000;
				s1 = s1 / 1000000000;
				s2 = s2 / 1000000000;;
				cat2 = 0;
			}
			rs2 = (ss1 + ss2);
			rs1 = s1 + s2 + (rs2 / 1000000000);
			printf(", %ld", rs1);
			printf("%ld", rs2 % 1000000000);
			s1 = s2;
			ss1 = ss2;
			s2 = rs1;
			ss2 = (rs2 % 1000000000);
		}
		if (((s1 + s2) < 0) && cat == 1)
			cat = 0;
	}
	printf("\n");
	return (0);
}
