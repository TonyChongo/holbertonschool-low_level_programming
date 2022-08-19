#include "hash_tables.h"

/**
 * hash_table_get- function that retrieves a value associated with a key
 * @ht: Hash table
 * @key: Key to looking for
 * Return: value or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int k_idx;
	hash_node_t *tmp;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	k_idx = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[k_idx];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}
