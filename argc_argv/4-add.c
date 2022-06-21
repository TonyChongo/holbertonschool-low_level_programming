#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Write a program that adds positive numbers.
 * @argc: An integer type of argument pointer
 * @argv: An array of character pointer
 * Return: Always 0 if success.
 */
int main(int argc, char *argv[])
{
	int s, d, a = 0;

	for (s = 1; s < argc; s++)
	{
		for (d = 0; argv[s][d] != '\0'; d++)
		{
			if (!isdigit(argv[s][d]))
			{
				printf("Error\n");
					return (1);
			}
		}
		a += atoi(argv[s]);
	}
	printf("%d\n", a);
	return (0);
}
