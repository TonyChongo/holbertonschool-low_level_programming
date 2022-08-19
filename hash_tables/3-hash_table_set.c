#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: Hash table
 * @key: The key
 * @value: Value with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *ent, *tmp;

	if (key == NULL || strcmp(key, "") == 0 || ht == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	ent = malloc(sizeof(hash_node_t));
	if (ent == NULL)
		return (0);
	ent->key = strdup(key);
	if (ent->key == NULL)
	{
		free(ent);
		return (0);
	}
	ent->value = strdup(value);
	if (ent->value == NULL)
	{
		free(ent);
		free(ent->value);
		return (0);
	}
	ent->next = ht->array[index];
	ht->array[index] = ent;
	return (1);
}
