#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ctype.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif
