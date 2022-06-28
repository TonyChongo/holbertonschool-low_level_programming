#include "3-calc.h"
#include <stdio.h>

/**
 * main - check the code
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j;
	int (*opera)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opera = get_op_func(argv[2]);
	i = atoi(argv[1]);
	j = atoi(argv[3]);

	if ((opera == NULL) || (argv[2][1]))
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '%' || argv[2][0] == '/') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", opera(i, j));
	return (0);
}
