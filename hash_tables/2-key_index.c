#include "hash_tables.h"

/**
 * key_index - unction that gives you the index of a key
 * @key: Key passed
 * @size: Size of hash table
 * Return: Key index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
