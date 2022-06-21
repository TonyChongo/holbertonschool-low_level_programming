#include <stdio.h>

/**
 * main - Write a program that prints all arguments it receives.
 * @argc: An integer type of argument pointer
 * @argv: An array of character pointer
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
		printf("argv[%2d}: %s\n", c, argv[c]);

	return (0);
}
