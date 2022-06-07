#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int u, e;

	for (u = 0; u <= 98; u++)
	{
		for (e = u + 1; e <= 99; e++)
		{
			putchar((u / 10) + '0');
			putchar((u % 10) + '0');
			putchar(' ');
			putchar((e / 10) + '0');
			putchar((e % 10) + '0');

			if (u == 98 && e == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
