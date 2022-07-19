#include "main.h"

/**
 * read_textfile - function that reads a text file 
 * and prints it to the POSIX standard output.
 * @filename: Filename
 * @letters: Number of letter to print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t j, k;
	char *x;

	if (!filename)
		return (0);

	i = open(filename, O_RDONLY);

	if (i == -1)
		return (0);

	x = malloc(sizeof(char) * (letters));
	if (!x)
		return (0);

	j = read(i, x, letters);
	k = write(STDOUT_FILENO, x, j);

	close(i);

	free(x);

	return (k);
}
