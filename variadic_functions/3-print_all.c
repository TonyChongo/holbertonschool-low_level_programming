#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Write a function that prints anything.
 * @format: a list of types of arguments
 * @...: Other
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
    va_list args;
    va_start(args, format);

    const char *p = format;
    int count = 0;

    while (*p != '\0')
    {
        if (count > 0)
            printf(", ");

        if (*p == 'c')
        {
            char c = va_arg(args, int);
            printf("%c", c);
            count++;
        }
        else if (*p == 'i')
        {
            int i = va_arg(args, int);
            printf("%d", i);
            count++;
        }
        else if (*p == 'f')
        {
            double f = va_arg(args, double);
            printf("%f", f);
            count++;
        }
        else if (*p == 's')
        {
            char *s = va_arg(args, char *);
            if (s != NULL)
                printf("%s", s);
            else
                printf("(nil)");
            count++;
        }

        p++;
    }

    va_end(args);
    printf("\n");
}
