#include <stdio.h>

/**
 * main - Write a program that prints the number of arguments passed into it
 * @argc: An integer type of argument pointer
 * @argv: An array of character pointer
 * Return: Always 0.
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
