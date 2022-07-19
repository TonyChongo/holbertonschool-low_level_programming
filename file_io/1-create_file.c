#include "main.h"

/**
 * create_file - Create a function that creates a file
 * @filename: File name
 * @text_content: Content to create
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	int let;
	int rw;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (let = 0; text_content[let]; let++)
		;

	rw = write(f, text_content, let);

	if (rw == -1)
		return (-1);

	close(f);

	return (1);
}
