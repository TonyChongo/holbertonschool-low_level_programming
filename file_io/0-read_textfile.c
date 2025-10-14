#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: File name to read
 * @letters:  the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int index, fd;
	char *c = malloc(sizeof(char) * (letters));

	if (!filename)
		return (0);
	if (!c)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	index = read(fd, c, letters);
	write(STDOUT_FILENO, c, index);

	free(c);
	close(fd);

	return (index);
}
