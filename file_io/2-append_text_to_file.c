#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: File name
 * @text_content: Append text
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int letter;
	int rwr;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		for (letter = 0; text_content[letter]; letter++)
			;

		rwr = write(f, text_content, letter);

		if (rwr == -1)
			return (-1);
	}
	close(f);
	return (1);
}
