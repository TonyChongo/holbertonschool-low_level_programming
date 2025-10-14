#include "main.h"

/**
 * error_exit - prints an error message to stderr and exits with the given code
 * @code: exit code
 * @format: format string for the error message
 * @arg: argument to insert into format string
 */
void error_exit(int code, const char *format, const char *arg)
{
    dprintf(STDERR_FILENO, format, arg);
    exit(code);
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, otherwise exits with error code
 */
int main(int argc, char *argv[])
{
    int file_from, file_to, rd, wr;
    char buffer[BUFFER_SIZE];
    mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

    if (argc != 3)
        error_exit(97, "Usage: cp file_from file_to\n", "");

    file_from = open(argv[1], O_RDONLY);
    if (file_from == -1)
        error_exit(98, "Error: Can't read from file %s\n", argv[1]);

    file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
    if (file_to == -1)
    {
        close(file_from);
        error_exit(99, "Error: Can't write to %s\n", argv[2]);
    }

    while ((rd = read(file_from, buffer, BUFFER_SIZE)) > 0)
    {
        wr = write(file_to, buffer, rd);
        if (wr != rd)
        {
            close(file_from);
            close(file_to);
            error_exit(99, "Error: Can't write to %s\n", argv[2]);
        }
    }

    if (rd == -1)
    {
        close(file_from);
        close(file_to);
        error_exit(98, "Error: Can't read from file %s\n", argv[1]);
    }

    if (close(file_from) == -1)
        error_exit(100, "Error: Can't close fd %d\n", "file_from");

    if (close(file_to) == -1)
        error_exit(100, "Error: Can't close fd %d\n", "file_to");

    return (0);
}
